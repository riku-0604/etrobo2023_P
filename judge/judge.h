#ifndef JUDGE_H
#define JUDGE_H

#include "Length.h"
#include "HsvHue.h"
#include "HsvSatu.h"
#include "TurnAngle.h"
#include "ArmAngle.h"
#include "TeelAngle.h"

class Judge
{
    public:
        Judge();
        virtual bool judgement();
        virtual void setpara(double para[]);
        virtual void init();
        virtual int  returnmode();
        bool state();
        virtual int JudgeID();
       

    protected:
        virtual bool calcjudge()=0;
        
        Length *mLength;
        HsvHue *mHue;     //Color
        HsvSatu *mSatu;  //Color
        TurnAngle *mTurnAngle;
        ArmAngle *mArmAngle;
        TeelAngle *mTeelAngle;

        enum State {
        INIT,
        JUDGEMENT
    };

    State mState;

    private:
        
};

#endif