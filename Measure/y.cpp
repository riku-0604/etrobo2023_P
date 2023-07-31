#include "y.h"

Y::Y()
    : Measure()
{

}

double Y::getValue()
{
    return my;
}

void Y::update(double yy)
{
    my = yy;
}