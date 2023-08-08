#include "curvevirtuallinetracer.h"
#include "math.h"

void curvevirtuallinetracer::run()
{
    
    
    //mTurn = calcTurn();
    setCommandV((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::run();

}

double curvevirtuallinetracer::calcTurn(double val1) 
{
    double val1_turn =  mPid->getOperation(val1);

  //  mPid->debug=true;

    if(mLeftEdge) val1_turn = -val1_turn;
    //setBias(-mForward*(1-mCurve)/(1+mCurve)*mAngleKp);
    setBias(mCurve);
    double turn =  val1_turn+mBias;
   
    return turn;
}

double curvevirtuallinetracer::twopointlength(double x,double y,double xx,double yy)
{
    len = sqrt((xx-x)*(xx-x) + (yy-y)*(yy-y));
    return len;
}

double curvevirtuallinetracer::centorpoint(double rad,double x,double y,double angle)
{
    centerx = (rad*cos((M_PI / 180)*angle)) + x;
    centery = (rad*sin((M_PI / 180)*angle)) + y;
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