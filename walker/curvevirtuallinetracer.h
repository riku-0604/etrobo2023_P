#ifndef CURVEVIRTUALLINETRACER_H
#define CURVEVIRTUALLINETRACER_H

#include "SimpleWalker.h"
#include "Measure.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include <math.h>

class curvevirtuallinetracer : public SimpleWalker {
    public :
        void run();
        void setParam(double rad,double speed,double angle, double ki, double kd);

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
};

#endif