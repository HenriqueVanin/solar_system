#pragma once

#include "Planeta.h"

class Sol
{
private:
    double time;

public:
    Sol ();
    ~Sol ();
    void setTime (double t);
    double getTime ();
};
