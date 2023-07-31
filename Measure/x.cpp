#include "x.h"

X::X()
    : Measure()
{

}

double X::getValue()
{
    return mx;
}

void X::update(double xx)
{
    mx = xx;
}