#ifndef __YPOINT_H__
#define __YPOINT_H__
#include "Measure.h"

class Ypoint : public Measure
{
    public:
        Ypoint();
        virtual double getValue();
        virtual void update(double ypoint);

    private:
        double mypoint;
};

#endif