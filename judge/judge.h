#ifndef JUDGE_H
#define JUDGE_H

#include "Length.h"
#include "HsvHue.h"
#include "HsvSatu.h"

class Judge
{
    public:
        Judge();
        virtual bool judgement();
        virtual void setpara(double para[]);
        virtual void init();

    protected:
        virtual bool calcjudge()=0;
        Length *mLength;
        HsvHue *mHue;     //Color
        HsvSatu *mSatu;  //Color
    enum State {
        INIT,
        JUDGEMENT,
        COLOR,
        TIME,
        END
    };

    private:

};

#endif