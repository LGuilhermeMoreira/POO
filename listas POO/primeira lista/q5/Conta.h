#include <iostream>
#include <string>
using namespace std;

class Conta
{
private:
    double saldo;
    double debito;

public:
    // sets
    void setsaldo(double);
    void setdebito(double);
    // gets
    double getsaldo();
    double getsdebito();
    // construtores
    Conta(double);
    // metodos
    void print_saldo_credito();
    void print_saldo_debito();
};