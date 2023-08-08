#ifndef JUDGE_TEELANGLE
#define JUDGE_TEELANGLE

#include "judge.h"

class JudgeTeelAngle : public Judge
{
    public:
        JudgeTeelAngle();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();
        void init();

    private:
        double mTeelAnglekids;
        double mSumTeelAnglekids;
        double firstvalue;
};
#endif