#include "Sistemasolar.h"
#include "stdafx.h"
//
SistemaSolar::SistemaSolar()
{
    Mercurio.set_Name("Mercurio");
    Venus.set_Name("Venus");
    Terra.set_Name("Terra");
    Marte.set_Name("Marte");
    Jupiter.set_Name("Jupiter");

    Mercurio.set_Orbit(10);
    Venus.set_Orbit(100);
    Terra.set_Orbit(1000);
    Marte.set_Orbit(10000);
    Jupiter.set_Orbit(100000);
    sun.setTime(1000000);
    executar();
}
SistemaSolar::~SistemaSolar()
{

}

void SistemaSolar::executar()
{
    cout << Mercurio.get_Name() << " ja realizou " << Mercurio.calc_Orbit(sun.getTime()) << " orbitas." << endl;
    cout << Venus.get_Name() << " ja realizou " << Venus.calc_Orbit(sun.getTime()) << " orbitas." << endl;
    cout << Terra.get_Name() << " ja realizou " << Terra.calc_Orbit(sun.getTime()) << " orbitas." << endl;
    cout << Marte.get_Name() << " ja realizou " << Marte.calc_Orbit(sun.getTime()) << " orbitas." << endl;
    cout << Jupiter.get_Name() << " ja realizou " << Jupiter.calc_Orbit(sun.getTime())<< " orbitas." << endl;

}

/*void SistemaSolar::executar()
{
    for (int i = 0; i < (int)planetas.size(); i++)
        cout << planetas[i].calc_Orbit(sun.getTime()) << endl;
}
*/
