#include "judge.h"

#include "ev3api.h"

extern Length *gLength;
extern HsvHue *gHue;
extern HsvSatu *gSatu;
extern TurnAngle *gTurnAngle;
extern ArmAngle *gArmAngle;
extern TeelAngle *gTeelAngle;
extern Brightness *gBrightness;

Judge::Judge():
    mLength(gLength),
    mHue(gHue),
    mSatu(gSatu),
    mBrightness(gBrightness),
    mTurnAngle(gTurnAngle),
    mArmAngle(gArmAngle),
    mTeelAngle(gTeelAngle),
    mState(INIT)
{
    
}

int Judge::JudgeID()
{
    return 0;
}

bool Judge::judgement()
{
    return false;
}

bool Judge::state()
{
    switch(mState) {
        case INIT:
            init();
            mState = JUDGEMENT;
        case JUDGEMENT:
            return judgement();
            break;
    }

    return false;
}

void Judge::setpara(double para[])
{
    
}

void Judge::init()
{

}

int Judge::returnmode()
{
    return 0;
}

/*bool Judge::calcjudge()
{
    return false;
}*/

