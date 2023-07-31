#ifndef __X_H__
#define __X_H__
#include "Measure.h"

class X : public Measure
{
    public:
        X();
        virtual double getValue();
        virtual void update(double xx);

    private:
        double mx;
};

#endif