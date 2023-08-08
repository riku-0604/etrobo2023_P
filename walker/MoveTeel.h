#ifndef EV3_UNIT_MOVETEEL_H_
#define EV3_UNIT_MOVETEEL_H_

#include "Walker.h"

class MoveTeel : public Walker{

public:
    MoveTeel(
        Odometry *odo
    );

    void run();
    void init();
    void setpara(double para3[]);
    int WalkerID();


protected:
    
    

private:
    double mTeelForward;//–Ú•W’l
    double pwm;

};
#endif