#include "curvevirtuallinetracer.h"
#include "math.h"


curvevirtuallinetracer::curvevirtuallinetracer(Odometry *odo,SpeedControl *scon):
SimpleWalker(odo,scon),mCurve(0)
{

}

void curvevirtuallinetracer::run()
{
    mx = mXpoint->getValue();
    my = mYpoint->getValue();
    mangle = mTurnAngle->getValue();
    sensorpoint(mx,my,mangle);
    radius = twopointlength(sensorx,sensory,centerx,centery);
    mTurn = calcTurn(radius);
    setCommandV((int)mspeed, (int)mTurn);
    printf(" centerx : %f\n",centerx);
    printf(" centery : %f\n",centery);
    printf(" sensorx : %f\n",sensorx);
    printf(" sensory : %f\n",sensory);
    SimpleWalker::run();

}

void curvevirtuallinetracer::init()
{
    mx = mXpoint->getValue();
    my = mYpoint->getValue();
    mangle = mTurnAngle->getValue();
    centorpoint(rad,mx,my,mangle);
    
}

double curvevirtuallinetracer::calcTurn(double val1) //setpara�̔��a�̒l���}�C�i�X���v���X����if�����l���邩�v�Z��������BsetBias���������邩�͎��@���Ȃ���邩�Ȃ���Ȃ�������
{
    double val1_turn =  mPid->getOperation(val1);

    //  mPid->debug=true;

    if(rad < 0) val1_turn = -val1_turn;
    //setBias(-mForward*(1-mCurve)/(1+mCurve)*mAngleKp);
    setBias(mCurve);

    double turn;

    turn =  val1_turn + mBias;

    
   
    return turn;
}

void curvevirtuallinetracer::setpara(double para3[])
{

    rad = para3[0];//���a
    mspeed = para3[1];//���x
    mp = para3[2];//P
    mi = para3[3];//I
    md = para3[4];//D


    mangle = mTurnAngle->getValue();//����p�x


    mPid->setTarget(fabs (rad));
    mPid->setKp(mp); 
    mPid->setKi(mi);
    mPid->setKd(md);
}

double curvevirtuallinetracer::twopointlength(double x,double y,double xx,double yy)
{
    len = sqrt((xx-x)*(xx-x) + (yy-y)*(yy-y));
    return len;
}

double curvevirtuallinetracer::centorpoint(double rad,double x,double y,double angle)
{
    centerx = (rad*-sin((M_PI / 180)*angle)) + x;
    centery = (rad*cos((M_PI / 180)*angle)) + y;
}

double curvevirtuallinetracer::sensorpoint(double x,double y,double angle)
{
    sensorx = (sl*cos((M_PI / 180)*angle)) + x;
    sensory = (sl*sin((M_PI / 180)*angle)) + y;
}

void curvevirtuallinetracer::setBias(double curve)
{
    mBias = curve;
}