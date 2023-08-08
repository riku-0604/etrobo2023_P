#include "judgeTurnAngle.h"


#include "ev3api.h"


JudgeTurnAngle::JudgeTurnAngle()
{
    
}

void JudgeTurnAngle::init()
{
    firstvalue = mTurnAngle->getValue();
    //printf("firstvalue%f\n",firstvalue);
    mSumTurnkids = mTurnkids + firstvalue;
    //printf("mSumTurnkids%f\n",mSumTurnkids);
}

void JudgeTurnAngle::setpara(double para[])
{
    mTurnkids = para[0];
}

bool JudgeTurnAngle::judgement()
{
    return calcjudge();
}

bool JudgeTurnAngle::calcjudge()
{
    /*if(mSumTurnkids <= mTurnAngle->getValue() || -mSumTurnkids >= mTurnAngle->getValue())
    {
        return true;
    }

    printf("TurnAngle%f\n",mTurnAngle->getValue());

    return false;*/

    if(mTurnkids >= 0)
    {
        if(mSumTurnkids <= mTurnAngle->getValue())
        {
            return true;
        }
        //printf("TurnAngle%f\n",mTurnAngle->getValue());

        return false;
    }
    else
    {
        if(mSumTurnkids >= mTurnAngle->getValue())
        {
            return true;
        }
        //printf("TurnAngle%f\n",mTurnAngle->getValue());

        return false;
    }
}

