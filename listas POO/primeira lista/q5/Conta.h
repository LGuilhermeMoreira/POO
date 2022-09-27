#ifndef CONTA_INCLUDED
#define CONTA_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Conta
{
private:
    double saldo;
public:
    // sets
    void setsaldo(double);
    // gets
    double getsaldo();
    // construtores
    Conta(double);
    // metodos
    void print_saldo_credito();
    void print_saldo_debito();
};

#endif