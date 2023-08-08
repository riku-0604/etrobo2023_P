#ifndef __ARMANGLE_H__
#define __ARMANGLE_H__
#include "Measure.h"

class ArmAngle : public Measure 
{
    public:
        ArmAngle();
        double getValue();
        void update(double ar);


    private:
        
};

#endif
