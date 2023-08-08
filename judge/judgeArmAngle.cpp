#include "judgeArmAngle.h"


#include "ev3api.h"

JudgeArmAngle::JudgeArmAngle()
{
}

void JudgeArmAngle::init()
{

}

void JudgeArmAngle::setpara(double para[])
{
    mArmAnglekids = para[0];
    //printf("mArmAnglekids%f\n",mArmAnglekids);
}

bool JudgeArmAngle::judgement()
{
    return calcjudge();
}

bool JudgeArmAngle::calcjudge()
{
    // printf("%f\n",mLengthkids);
    //printf("mArmAngle->getValue()OK%f\n",mArmAngle->getValue());

    if(mArmAnglekids < 0)
    {
        if(-mArmAnglekids+1 >= mArmAngle->getValue())
        {
            return true;
        }

        return false;
    }
    else
    {
        if(mArmAnglekids-1  <= mArmAngle->getValue())
        {
            return true;
        }

        return false;
    }
    /*if(mArmAnglekids <= mArmAngle->getValue() || -mArmAnglekids >= mArmAngle->getValue())
    {
        return true;
    }

    return false;*/
}

