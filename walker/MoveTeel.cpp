#include "MoveTeel.h"
#include "TeelAngle.h"
#include "Section.h"

extern TeelAngle *gTeelAngle;
extern Motor *gTeel;

MoveTeel::MoveTeel(Odometry *odo):Walker(odo)
{
    //printf("MoveTeel");
}

int MoveTeel::WalkerID()
{
    return Section::TEEL;
}


void MoveTeel::run()
{
    //printf("runteel");
    // mTeelForward  //目標値

    gTeel->setPWM(mTeelForward);


}


void MoveTeel::init()
{
   // printf("MoveTeel  initOK");
}


void MoveTeel::setpara(double para3[])
{
    mTeelForward = para3[0];//目標値
    //printf("mTeelForward%f",mTeelForward);
}

