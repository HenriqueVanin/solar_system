#pragma once

class Sol;
class Planeta
{
private:
    char name [15];
    int orbitTime;

public:
    Planeta();
    ~Planeta();
    void set_Name(char* n);
    char* get_Name ();
    void set_Orbit(int ot);
    int get_Orbit ();
    float calc_Orbit (double t);
};
