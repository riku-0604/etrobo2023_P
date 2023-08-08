#include "Walker.h"

Walker::Walker( Odometry *odo):
    mOdo(odo),
    mState(INIT)
{
    mPid = new PID();

    mBright = gBrightness;
}

int Walker::WalkerID()
{
    //printf(" Walker WalkerID");
    return 0;
    
}
void Walker::move()
{
    //printf("%d\n",mState);
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
    //printf("Walker  initOK");
}


void Walker::printInfo()
{
    msg_log("Walker");
}