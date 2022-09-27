#ifndef POUPANCA_INCLUDED
#define POUPANCA_INCLUDED
#include <iostream>
#include <string>
#include "Conta.h"
using namespace std;

class Poupanca: public Conta{
    private:
        double rendimento;
    public:
        // sets
        void setrendimento(double);
        // gets
        double getrendimento();
        // constructor
        Poupanca(double,double);
        // metodos
        void calcula_rendimento();
};

#endif