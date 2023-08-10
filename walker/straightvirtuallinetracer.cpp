#include "straightvirtuallinetracer.h"
#include "math.h"


straightvirtuallinetracer::straightvirtuallinetracer(Odometry *odo,SpeedControl *scon):
SimpleWalker(odo,scon),
mBias(0)
{

}

void straightvirtuallinetracer::run()
{
    mx = mXpoint->getValue();
    my = mYpoint->getValue();
    mangle = mTurnAngle->getValue();
    sensorpoint(mx,my,mangle);
    mline = line(targetx,targety,sensorx,sensory,mx,my);
    //printf("%f\n",mline);
    mTurn = calcTurn(mline);
    setCommandV((int)mspeed, (int)mTurn);

    SimpleWalker::run();

}

void straightvirtuallinetracer::init()
{
    mx = mXpoint->getValue();
    my = mYpoint->getValue();
    mangle = mTurnAngle->getValue();
    //printf("mangle  %f\n",mangle);
    //printf("lineangle  %f\n",lineangle);
    targetpoint(mx,my,lineangle);
    //sensorpoint(mx,my,mangle);
    //mline = line(targetx,targety,sensorx,sensory,mx,my);

}

double straightvirtuallinetracer::calcTurn(double val1) 
{
    double val1_turn =  mPid->getOperation(val1);

  //  mPid->debug=true;

    //if(val1 > 0) 
    val1_turn = -val1_turn;
    //setBias(-mForward*(1-mCurve)/(1+mCurve)*mAngleKp);
    setBias(mCurve);
    double turn =  val1_turn+mBias;
   
    return turn;
}

void straightvirtuallinetracer::setpara(double para3[])
{

    lineangle = para3[0];//描きたい直線の角度
    mspeed = para3[1];//速度
    mp = para3[2];//P
    mi = para3[3];//I
    md = para3[4];//D


    mangle = mTurnAngle->getValue();//旋回角度


    mPid->setTarget(0);
    mPid->setKp(mp); 
    mPid->setKi(mi);
    mPid->setKd(md);
}

double straightvirtuallinetracer::line(double tx,double ty,double sx,double sy,double mx,double my)
{
    double mline = (ty-my)*sx - (tx-mx)*sy + (tx*my)-(ty*mx);
    /*printf("targetx %f\n",tx);
    printf("targety %f\n",ty);
    printf("sensorx %f\n",sx);
    printf("sensoey %f\n",sy);
    printf("x %f\n",mx);
    printf("y %f\n",my);*/
    return mline;
}

double straightvirtuallinetracer::targetpoint(double x,double y,double angle)
{
    targetx = (cos((M_PI / 180)*angle)) + x;
    targety = (sin((M_PI / 180)*angle)) + y;
}

double straightvirtuallinetracer::sensorpoint(double x,double y,double angle)
{
    sensorx = (sl*cos((M_PI / 180)*angle)) + x;
    sensory = (sl*sin((M_PI / 180)*angle)) + y;
}

void straightvirtuallinetracer::setBias(double curve)
{
    mBias = curve;
}