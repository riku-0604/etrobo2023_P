#include "Xpoint.h"
#include "stdio.h"

Xpoint::Xpoint()
    : Measure()
{

}

double Xpoint::getValue()
{
    return mxpoint;
}

void Xpoint::update(double xpoint)
{
    mxpoint = xpoint;
    printf("mxpoint%f\n",mxpoint);
}