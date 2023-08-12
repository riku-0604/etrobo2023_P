#include "TurnWalker.h"
#include "math.h"


TurnWalker::TurnWalker(Odometry *odo,SpeedControl *scon):
SimpleWalker(odo,scon),
mBias(0)
{

}

void TurnWalker::run()
{
    mlen = mLength->getValue();

    calclen = mlen - slen;//現在位置－旋回開始位置

    mTurn = calcTurn(calclen);

    setCommand((int)mTurn, (int)mangle);//setCommnad(getOperationの返り値,パラメーターから受け取った値)

    SimpleWalker::run();
}

void TurnWalker::init()
{
    slen = mLength->getValue();
}

double TurnWalker::calcTurn(double val1) 
{
    double val1_turn;
    val1_turn = mPid->getOperation(val1);

    //mPid->debug=true;

    //if(val1 > 0) 
    //val1_turn = -val1_turn;
    //setBias(-mForward*(1-mCurve)/(1+mCurve)*mAngleKp);

    //setBias(mCurve);

    double turn = val1_turn + mBias;
   
    return turn;
}

void TurnWalker::setpara(double para3[])
{
    mangle = para3[0];

    mp = para3[1];
    mi = para3[2];
    md = para3[3];

    mPid->setTarget(0);
    mPid->setKp(mp); 
    mPid->setKi(mi);
    mPid->setKd(md);
}



void TurnWalker::setBias(double curve)
{
    mBias = curve;
}