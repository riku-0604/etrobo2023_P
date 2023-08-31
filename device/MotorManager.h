#ifndef MOTORMANAGER_
#define MOTORMANAGER_

#include <math.h>
#include "util.h"

#include "Motor.h"
#include "Odometry.h"

class MotorManager
{
    public:
        MotorManager(Motor *left,
            Motor *right);

    void setPwm(int left,int right);

    void init();

    

    private:
        Motor *mLeftMotor;
        Motor *mRightMotor;

        double mLeftMotorCount;
        double mRightMotorCount;

        double mInitLeftMotorCount;
        double mInitRightMotorCount;

        double mNowLeftMotorCount;
        double mNowRightMotorCount;

        int SetPwm90Flag = 0;

        double Set90Count = 400;

};

#endif