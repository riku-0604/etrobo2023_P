#ifndef __TEELANGLE_H__
#define __TEELANGLE_H__
#include "Measure.h"

class TeelAngle : public Measure 
{
    public:
        TeelAngle();
        double getValue();
        void update(double te);


    private:
        double mTeelAngle;
};

#endif