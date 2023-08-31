#include "judgeBlockColor.h"
#include "math.h"

#include "Section.h"
#include "ev3api.h"
#include "util.h"

JudgeBlockColor::JudgeBlockColor()
{
    countTime = 0;//時間カウント初期化
    RedBlockCount = 0;//赤ブロックのカウント初期化
    BlueBlockCount = 0;//青ブロックのカウント初期化
}

int JudgeBlockColor::JudgeID()
{
    return Section::BLOCKCOLOR;
}

void JudgeBlockColor::init()
{
    //printf("JudgeBlockColorinitOK\n");
}

void JudgeBlockColor::setpara(double para[])
{
    mHueRedkids = para[0];//赤の色の範囲の中央値
    mHueBluekids = para[1];//青の色の範囲の中央値
    mSatukids = para[2];//希望の彩度
    mTimekids = para[3];//時間
}

bool JudgeBlockColor::judgement()
{
    return calcjudge();
}

double JudgeBlockColor::RedBlockColorCount()
{
    //RedBlockCount = 40;//デバック用
    return RedBlockCount;
}

double JudgeBlockColor::BlueBlockColorCount()
{
    //BlueBlockCount = 60;//デバック用
    return BlueBlockCount;
}


int JudgeBlockColor::RedBlueWinner()
{
    if(BlueBlockColorCount() < RedBlockColorCount())
    {
        return 1;//赤
    }
    else
    {
        return 0;//青
    }
}

bool JudgeBlockColor::calcjudge()
{
    //mHue->getValue()//とってくる色の値
    //mSatu->getValue()//とってくる彩度
    //printf("JudgeBlockColor::calcjudgeOK");
    //赤の判定開始
    static char str[256];

    sprintf(str,"RED H  %f",mHue->getValue());
    msg_f(str,4);
    double Redvalue;
    Redvalue = mHue->getValue() - mHueRedkids;  //希望の色の範囲の中央値 ー とってくる色の値
    
    Redvalue = fabs(Redvalue);

    if(Redvalue >= 180)
    {
        Redvalue = 360 - Redvalue;
    }

    if(Redvalue < 20)
    {
        //printf("RED H  %f\n",mHue->getValue());
        if(mSatukids < mSatu->getValue())
        {
            //printf("RED S  %f\n",mSatu->getValue());
            RedBlockCount++;
            //printf("RedBlockCount%f\n",RedBlockCount);
        }
    }

    sprintf(str,"RedBlockCount:%f",RedBlockCount);
    msg_f(str,5);

    //青の判定開始
    double Bluevalue;
    Bluevalue = mHue->getValue() - mHueBluekids;  //希望の色の範囲の中央値 ー とってくる色の値
    //printf("BLUE H  %f\n",mHue->getValue());
    Bluevalue = fabs(Bluevalue);
    
    if(Bluevalue >= 180)
    {
        Bluevalue = 360 - Bluevalue;
    }

    if(Bluevalue < 20)
    {
        //printf("BLUE H  %f\n",mHue->getValue());
        if(mSatukids < mSatu->getValue())
        {
            //printf("BLUE S  %f\n",mSatu->getValue());
            BlueBlockCount++;
            //printf("BlueBlockCount%f\n",BlueBlockCount);
        }
    }

    sprintf(str,"BlueBlockCount:%f",BlueBlockCount);
            
    msg_f(str,6);

    //printf("mTimekids%f\n",mTimekids);
    //printf("countTime%f\n",countTime);

    if(mTimekids <= countTime)
    {

        return true;
    }

    //printf("countTime  %f\n",countTime);

    countTime++;


    return false;

}