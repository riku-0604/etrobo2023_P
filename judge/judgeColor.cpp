#include "judgeColor.h"
#include "math.h"


#include "util.h"
#include "ev3api.h"

JudgeColor::JudgeColor()
{
}

void JudgeColor::init()
{
    
}

void JudgeColor::setpara(double para[])
{
    mHuekids = para[0];//希望の色の範囲の中央値
    mSatukids = para[1];//希望の彩度
}

bool JudgeColor::judgement()
{
    return calcjudge();
}

bool JudgeColor::calcjudge()
{
    //mHue->getValue()//とってくる色の値
    //mSatu->getValue()//とってくる彩度
    static char str[256];


    sprintf(str,"H : %f",mHue->getValue());
    msg_f(str,4);

    sprintf(str,"S : %f",mSatu->getValue());
    msg_f(str,5);

    double value;
    value = mHue->getValue() - mHuekids;  //希望の色の範囲の中央値 ー とってくる色の値

    value = fabs(value);

    if(value >= 180)
    {
        value = 360 - value;
    }

    if(value < 20)
    {
        if(mSatukids < mSatu->getValue())
        {
            return true;
        }
    }

    return false;

}