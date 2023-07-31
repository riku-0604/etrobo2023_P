#ifdef MOTORMANAGER_
#define MOTORMANAGER_

#include <math.h>
#include "util.h"

#include "Motor.h"
#include "Odometry.h"



class  Motermanagement
{
    public:
        MotorManager(Motor *left,
            Motor "right");

    void setPwm(int left,int right);

    private:
        Motor *mLeftMotor;
        Motor *mRightMotor;
};

#endif