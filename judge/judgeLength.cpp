#include "judgeLength.h"


#include "ev3api.h"

JudgeLength::JudgeLength()
{
 
}

void JudgeLength::init()
{
    //printf("JudgeLengthinitOK");
    firstvalue = mLength->getValue();
    mSumLengthkids = mLengthkids + firstvalue;
}

void JudgeLength::setpara(double para[])
{
    mLengthkids = para[0];
}

bool JudgeLength::judgement()
{
    return calcjudge();
}

bool JudgeLength::calcjudge()
{
    // printf("%f\n",mLengthkids);
    // printf("%f\n", mLength->getValue());
    if(mLengthkids<0)
    {
        if(mSumLengthkids >= mLength->getValue())
        {
            return true;
        }
        
        return false;
    }
    else
    {
        if(mSumLengthkids <= mLength->getValue())
        {
            return true;
        }

        return false;
    }
    
}

