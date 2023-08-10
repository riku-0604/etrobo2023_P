#ifndef EV3_UNIT_CHANGEDEFOLTARM_H_
#define EV3_UNIT_CHANGEDEFOLTARM_H_

#include "Walker.h"

class ChangeDefoltArm : public Walker{

public:
    ChangeDefoltArm(
        Odometry *odo
    );

    void run();
    void init();
    void setpara(double para3[]);
    int WalkerID();


protected:
    
    

private:
    double val;
  
};
#endif