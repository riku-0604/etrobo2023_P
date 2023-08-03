#include "Walker.h"

Walker::Walker( Odometry *odo):
    mOdo(odo),
    mState(INIT)
{
    mPid = new PID();

    mBright = gBrightness;
}


void Walker::move()
{
    switch(mState) {
        case INIT:
            init();
            mState = RUN;
        case RUN:
            run();
            break;
    }
}

void Walker::run()
{

}

void Walker::init()
{
    //printf("initOK");
}


void Walker::printInfo()
{
    msg_log("Walker");
}