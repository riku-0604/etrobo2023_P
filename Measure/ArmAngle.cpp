#include "ArmAngle.h"

ArmAngle::ArmAngle()
    : Measure()
{

}

double ArmAngle::getValue()
{
   // printf("mArm->getCount()");
    return mArm->getCount();
}

void ArmAngle::update(double ar)
{
   
}