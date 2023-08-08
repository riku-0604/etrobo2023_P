#ifndef JUDGE_TURNANGLE
#define JUDGE_TURNANGLE

#include "judge.h"

#include "ev3api.h"

class JudgeTurnAngle : public Judge
{
    public:
        JudgeTurnAngle();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();
        void init();

    private:
        double mTurnkids;
        double mdirectkids;
        double mjudgeMemokids;
        double mSumTurnkids;
        double firstvalue;
};


#endif