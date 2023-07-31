#ifndef __Y_H__
#define __Y_H__
#include "Measure.h"

class Y : public Measure
{
    public:
        Y();
        virtual double getValue();
        virtual void update(double yy);

    private:
        double my;
};

#endif