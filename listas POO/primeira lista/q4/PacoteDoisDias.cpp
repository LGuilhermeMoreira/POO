#include <iostream>
#include <string>
#include "PacoteDoisDias.h"
using namespace std;

// constructor
PacoteDoisDias::PacoteDoisDias(string a, string b, string c, string d, string e, string f, string g, string h, string i, string j, float k, float l, float m) 
: PacoteOverNight(a, b, c, d, e, f, g, h, i, j, k, l,m){
}

// gets
double PacoteDoisDias::gettaxaadicional()
{
    return PacoteOverNight::gettaxaadicional();
}
// sets
void PacoteDoisDias::settaxaadicional(double taxaadicional)
{
   PacoteOverNight::settaxaadicional(taxaadicional);
}
// metodos
// terminar o calculacusto
double PacoteDoisDias::CalculaCusto()
{
    double x = Pacote::CalculaCusto();
    return x + gettaxaadicional();
}
