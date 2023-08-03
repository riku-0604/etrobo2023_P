#ifndef JUDGE_TIME
#define JUDGE_TIME

#include "judge.h"

#include "ev3api.h"

class JudgeTime : public Judge
{
    public:
        JudgeTime();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();

    private:
        double countTime;
        double mTimekids;
};
#endif