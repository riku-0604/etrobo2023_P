#include "judgeTeelAngle.h"


#include "ev3api.h"

JudgeTeelAngle::JudgeTeelAngle()
{
    //printf("JudgeTeelAngleOK");
}

void JudgeTeelAngle::init()
{
    //printf("JudgeTeelAngleinitOK");
    firstvalue = mTeelAngle->getValue();

   // printf("firstvalue%f\n",firstvalue);

    mSumTeelAnglekids = mTeelAnglekids + firstvalue;

    //printf("mSumTeelAnglekids%f\n",mSumTeelAnglekids);
    //printf("mTeelAnglekids%f\n",mTeelAnglekids);
}

void JudgeTeelAngle::setpara(double para[])
{
    mTeelAnglekids = para[0];
}

bool JudgeTeelAngle::judgement()
{
    return calcjudge();
}

bool JudgeTeelAngle::calcjudge()
{

    //printf("mTeelAngle->getValue()%f\n",mTeelAngle->getValue());
    /*printf("mTeelAnglekids%f\n",mTeelAnglekids);
    printf("mSumTeelAnglekids%f\n",mSumTeelAnglekids);*/
    
    if(mTeelAnglekids < 0)
    {
        if(mSumTeelAnglekids  >= mTeelAngle->getValue())
        {
            return true;
        }

        return false;
    }
    else
    {
        if(mSumTeelAnglekids  <= mTeelAngle->getValue())
        {
            return true;
        }

        return false;
    }
    //printf("TeelJudgecalcOK");
    
   /*if(mTeelAnglekids <= mTeelAngle->getValue())
    {
        return true;
    }
    
    return false;*/
    

    
}

