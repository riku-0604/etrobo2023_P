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
        double len;
        double sl = 5;
        double targetx;
        double targety;
        double sensorx;
        double sensory;
        
        double calcTurn(double val1);
        void setBias(double curve);

        double mSpeed=0;

        int mTargetSpeed;
        double mPFactor;
        double mIFactor;
        double mDFactor;

        double mAngleKp;
        bool mLeftEdge;
        double mCurve;


        double mBias;

        int mLimit;  

        double mTracerkids;
        double mline;

        double mp;
        double mi;
        double md;

        double mlen;
        double slen;
        double calclen;
        double mangle;
};

#endif