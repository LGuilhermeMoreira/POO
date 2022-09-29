#ifndef PACOTEDOISDIAS_INCLUDED
#define PACOTEDOISDIAS_INCLUDED

#include <iostream>
#include <string>
#include "Pacote.h"
using namespace std;

class PacoteDoisDias : public Pacote{
    private:
        double taxaadicional;
    public:
        // constructor
        PacoteDoisDias(string, string, string, string, string, string, string, string, string, string, float, float, double);
        // set
            void settaxaadicional(double);
        // get
            double gettaxaadicional();
        // metodos
            double CalculaCusto();
};

#endif