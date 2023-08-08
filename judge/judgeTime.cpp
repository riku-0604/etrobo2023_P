#include "judgeTime.h"


#include "ev3api.h"


JudgeTime::JudgeTime()
{
    countTime = 0;//ŠÔƒJƒEƒ“ƒg‰Šú‰»
}

void JudgeTime::init()
{
    
}

void JudgeTime::setpara(double para[])
{
    mTimekids = para[0];
    //printf("mTimekids%f\n",mTimekids);
}

bool JudgeTime::judgement()
{
    return calcjudge();
}

bool JudgeTime::calcjudge()
{
    //printf("mTimekids%f\n",mTimekids);
   // printf("countTime%f\n",countTime);

    if(mTimekids <= countTime)
    {
        return true;
    }

    countTime++;

    return false;
}

