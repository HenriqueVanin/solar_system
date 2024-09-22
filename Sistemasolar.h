#pragma once

#include "stdafx.h"
#include "Sol.h"
#include "Planeta.h"

class SistemaSolar
{
private:
    Sol sun;
    //vector< Planeta >planetas;
    Planeta Mercurio, Venus, Terra, Marte, Jupiter;

public:
    SistemaSolar();
    ~SistemaSolar();
    void executar();

};
