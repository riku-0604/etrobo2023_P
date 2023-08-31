#ifndef JUDGE_BRIGHTNESS
#define JUDGE_BRIGHTNESS

#include "judge.h"

class JudgeBrightness : public Judge
{
    public:
        JudgeBrightness();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();
        void init();

    private:
        double mBrightnesskids;
        double mWhiteFlag;

        
};
#endif