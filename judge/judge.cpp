#include "judge.h"

#include "ev3api.h"
extern Length *gLength;

Judge::Judge():
    mLength(gLength)
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

