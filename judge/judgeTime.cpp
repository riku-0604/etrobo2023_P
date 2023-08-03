#include "judgeTime.h"


#include "ev3api.h"


JudgeTime::JudgeTime()
{
    countTime = 0;
}

void JudgeTime::setpara(double para[])
{
    mTimekids = para[0];
}

bool JudgeTime::judgement()
{
    return calcjudge();
}

bool JudgeTime::calcjudge()
{
    // printf("%f\n",mTimekids);

    if(mTimekids <= countTime)
    {
        return true;
    }

    countTime++;

    return false;
}

