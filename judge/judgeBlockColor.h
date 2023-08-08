#ifndef JUDGE_BLOCKCOLOR
#define JUDGE_BLOCKCOLOR

#include "judge.h"


class JudgeBlockColor : public Judge
{
    public:
        JudgeBlockColor();
        void setpara(double para[]);
        bool judgement();
        double RedBlockColorCount();
        double BlueBlockColorCount();
        int RedBlueWinner();
        int JudgeID();
    protected:
        bool calcjudge();
        void init();


    private:
        double mHueRedkids;
        double mHueBluekids;
        double mSatukids;
        double mTimekids;
        double countTime;
        double RedBlockCount;
        double BlueBlockCount;
};
#endif