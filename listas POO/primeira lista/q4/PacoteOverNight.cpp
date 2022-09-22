#include <iostream>
#include <string>
#include "PacoteOverNight.h"
using namespace std;

// constructor
PacoteOverNight::PacoteOverNight(string a, string b, string c, string d, string e, string f, string g, string h, string i, string j, float k, float l, float m):
Pacote(a, b, c, d, e, f, g, h, i, j, k, l){
    settaxaadicional(m);
}

// gets
double PacoteOverNight::gettaxaadicional(){
    return this->taxaadicional;
}
// sets
void PacoteOverNight::settaxaadicional(double taxaadicional){
    this->taxaadicional = taxaadicional;
}
// metodos
// terminar o calculacusto
double PacoteOverNight::calculacusto(){

}
