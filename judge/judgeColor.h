#ifndef JUDGE_COLOR
#define JUDGE_COLOR

#include "judge.h"

class JudgeColor : public Judge
{
    public:
        JudgeColor();
        void setpara(double para[]);
        bool judgement();

    protected:
        bool calcjudge();


    private:
        double mHuekids;
        double mSatukids;
};
#endif