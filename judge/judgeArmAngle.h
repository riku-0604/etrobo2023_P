#ifndef JUDGE_ARMANGLE
#define JUDGE_ARMANGLE

#include "judge.h"

class JudgeArmAngle : public Judge
{
    public:
        JudgeArmAngle();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();
        void init();

    private:
        double mArmAnglekids;
        
};
#endif