#ifndef TURNWALKER_H
#define TURNWALKER_H

#include "SimpleWalker.h"
#include "Measure.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include <math.h>

class TurnWalker : public SimpleWalker {
    public :
        TurnWalker(Odometry *odo,SpeedControl *scon);
        void run();
        void setpara(double para3[]);
        void init();

    protected :

    private:
        
        double calcTurn(double val1);
        void setBias(double curve);

        double mCurve;

        double mBias;

        double mp;
        double mi;
        double md;

        double mlen;
        double slen;
        double calclen;
        double mangle;
};

#endif