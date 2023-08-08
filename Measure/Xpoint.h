#ifndef __XPOINT_H__
#define __XPOINT_H__
#include "Measure.h"

class Xpoint : public Measure
{
    public:
        Xpoint();
        double getValue();
        void update(double xpoint);

    private:
        double mxpoint;
};

#endif