#ifndef JUDGE_LENGTH
#define JUDGE_LENGTH

#include "judge.h"

class JudgeLength : public Judge
{
    public:
        JudgeLength();
        void setpara(double para[]);
        bool judgement();


    protected:
        bool calcjudge();

    private:
        double mLengthkids;
        bool mdirect;
};
#endif