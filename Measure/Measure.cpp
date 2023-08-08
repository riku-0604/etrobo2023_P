#include "Measure.h"

extern Motor *gArm;
extern Motor *gTeel;

Measure::Measure()
{
    mLpf = new LowPassFilter();
    mArm = gArm;
    mTeel = gTeel;
}

double Measure::getValue()
{
    return 0;
}

void Measure::update(double upm)
{
    
}