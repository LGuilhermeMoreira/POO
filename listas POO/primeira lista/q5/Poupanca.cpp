#include <iostream>
#include <string>
#include "Poupanca.h"
using namespace std;

// constructor
Poupanca::Poupanca(double saldo):Conta(saldo){}

// set
void Poupanca::setrendimento(double rendimento){
    this->rendimento = rendimento;
}

// get
double Poupanca::getrendimento(){
    return rendimento;
}

// metodos
double Poupanca::calcula_rendimento(){
    return (getsaldo() * getrendimento());
}