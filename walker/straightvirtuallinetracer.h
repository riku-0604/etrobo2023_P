#ifndef STRAIGHTVIRTUALLINETRACER_H
#define STRAIGHTVIRTUALLINETRACER_H

#include "SimpleWalker.h"
#include "Measure.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include <math.h>

class straightvirtuallinetracer : public SimpleWalker {
    public :
        straightvirtuallinetracer(Odometry *odo,SpeedControl *scon);
        void run();
        void setpara(double para3[]);
        void init();

    protected :

    private:
        double line(double tx,double ty,double sx,double sy,double mx,double my);
        void targetpoint(double x,double y,double angle);
        void sensorpoint(double x,double y,double angle);
        double len;
        double sl = 5;
        double targetx;
        double targety;
        double sensorx;
        double sensory;
        
        double calcTurn(double val1);
        void setBias(double curve);

        double mSpeed;

        int mTargetSpeed;
        double mTarget;
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

        double lineangle;
        double mspeed;
        double mp;
        double mi;
        double md;

        double mx;
        double my;
        double mangle;
};

#endif
