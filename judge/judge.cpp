#include "judge.h"

#include "ev3api.h"

extern Length *gLength;
extern HsvHue *gHue;
extern HsvSatu *gSatu;

Judge::Judge():
    mLength(gLength),
    mHue(gHue),
    mSatu(gSatu)
{
    
}

bool Judge::judgement()
{
    return false;
}

void Judge::setpara(double para[])
{
    
}

void Judge::init()
{

}

/*bool Judge::calcjudge()
{
    return false;
}*/

