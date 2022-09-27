#ifndef CONTACORRENTE_INCLUDED
#define CONTACORRENTE_INCLUDED
#include <iostream>
#include <string>
#include "Conta.h"
using namespace std;

class Conta_corrente : public Conta
{
private:
    double taxa;
public:
    // sets
    void settaxa(double);
    // gets
    double gettaxa();
    // constructor
    Conta_corrente(double,double);
    // metodos
    void taxa_credito();
    void taxa_debito();
};

#endif