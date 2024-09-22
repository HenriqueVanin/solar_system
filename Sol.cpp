#include "Sol.h"

Sol::Sol()
{
    time = -1;
}

Sol::~Sol()
{

}

void Sol::setTime(double t)
{
    time = t;
}

double Sol::getTime()
{
    return time;
}
