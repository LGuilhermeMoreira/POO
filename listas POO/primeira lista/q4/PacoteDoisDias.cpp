#include <iostream>
#include <string>
#include "PacoteDoisDias.h"
using namespace std;

// constructor
PacoteDoisDias::PacoteDoisDias(string a, string b, string c, string d, string e, string f, string g, string h, string i, string j, float k, float l, double m) 
: Pacote(a, b, c, d, e, f, g, h, i, j, k, l){
    settaxaadicional(m);
}

// gets
double PacoteDoisDias::gettaxaadicional()
{
   return this->taxaadicional;
}
// sets
void PacoteDoisDias::settaxaadicional(double taxaadicional)
{
   this->taxaadicional = taxaadicional;
}
// metodos
double PacoteDoisDias::CalculaCusto()
{
   return Pacote::CalculaCusto() + this->taxaadicional;
}

