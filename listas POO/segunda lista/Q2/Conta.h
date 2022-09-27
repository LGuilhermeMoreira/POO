#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include<iostream>

class Conta{
    public:
        double saldo;
        // costructor
        Conta(double);
        // gets
        double getsaldo();
        // metodos
        void Credito();
        void Debito();
};

#endif