#include "ChangeDefoltArm.h"
#include "Section.h"
#include "app.h"

ChangeDefoltArm::ChangeDefoltArm(Odometry *odo):Walker(odo)
{
    //printf("ChangeDefoltArm");
}

int ChangeDefoltArm::WalkerID()
{
    return 0;
}


void ChangeDefoltArm::run()
{
    setDefoltArm(val);
}


void ChangeDefoltArm::init()
{
   //printf("MoveTeel  initOK");
}


void ChangeDefoltArm::setpara(double para3[])
{
    val = para3[0];
}

