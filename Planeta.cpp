#include "stdafx.h"
#include "Planeta.h"
#include "Sol.h"

Planeta::Planeta()
{
    orbitTime = -1;
}

Planeta::~Planeta()
{

}

void Planeta::set_Name(char* n)
{
    strcpy(name, n);
}

char* Planeta::get_Name ()
{
    return name;
}

void Planeta::set_Orbit(int ot)
{
    orbitTime = ot;
}

int Planeta::get_Orbit()
{
    return orbitTime;
}

float Planeta::calc_Orbit(double t)
{
    return (t/orbitTime);
}
