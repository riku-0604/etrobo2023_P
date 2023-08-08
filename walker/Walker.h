#ifndef WALKER_H_
#define WALKER_H_

#include "Odometry.h"
#include "Brightness.h"
#include "PID.h"
#include "Xpoint.h"
#include "Ypoint.h"
#include "TurnAngle.h"

extern Brightness *gBrightness;

class Walker
{
    public:
        Walker( Odometry *odo );

        virtual void run();
        virtual void printInfo();
        virtual void setpara(double para[])=0;
        virtual void init()=0;
        virtual int WalkerID();
        void move();
        enum State {
            INIT,
            RUN
        };
    protected:
        Odometry *mOdo;
        PID *mPid;

        Brightness *mBright;

        State mState;
        Xpoint *mXpoint;
        Ypoint *mYpoint;
        TurnAngle *mTurnAngle;

    private:



};
#endif
