#ifndef CURVEVIRTUALLINETRACER_H
#define CURVEVIRTUALLINETRACER_H

#include "SimpleWalker.h"
#include "Measure.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include <math.h>

class curvevirtuallinetracer : public SimpleWalker {
    public :
        curvevirtuallinetracer(Odometry *odo,SpeedControl *scon);
        void run();
        void setpara(double para3[]);
        void init();

    protected :

    private:
        double twopointlength(double x,double y,double xx,double yy);
        double centorpoint(double rad,double x,double y,double angle);
        double sensorpoint(double x,double y,double angle);
        double len;
        double sl = 5;
        double centerx;
        double centery;
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
        double radius;

        double rad;
        double mspeed;
        double mp;
        double mi;
        double md;

        double mx;
        double my;
        double mangle;
};

#endif