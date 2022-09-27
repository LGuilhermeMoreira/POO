#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <iostream>

class Conta
{
private:
    double saldo;
public:
    // costructor
    Conta(double);
    // gets
    double getsaldo();
    // metodos
    void Credito();
    void Debito();
};

#endif