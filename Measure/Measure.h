#ifndef __MEASURE_H__
#define __MEASURE_H__

#include "LowPassFilter.h"
#include "Motor.h"
#include "ev3api.h"

using namespace ev3api;

class Measure
{
    public:
        Measure();
        virtual void update(double upm);
        virtual double getValue();

    protected:
            LowPassFilter *mLpf;
            Motor *mArm;
            Motor *mTeel;
    private:

};

#endif

