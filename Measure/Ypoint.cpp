#include "Ypoint.h"
#include "stdio.h"

Ypoint::Ypoint()
    : Measure()
{

}

double Ypoint::getValue()
{
    return mypoint;
}

void Ypoint::update(double ypoint)
{
    mypoint = ypoint;
    //printf("mypoint%f\n",mypoint);
}