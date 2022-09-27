#include <iostream>
#include <string>
#include "Poupanca.h"
using namespace std;

// constructor
Poupanca::Poupanca(double saldo,double rendimento):Conta(saldo){
    setrendimento(rendimento);
}

// set
void Poupanca::setrendimento(double rendimento){
    this->rendimento = rendimento;
}

// get
double Poupanca::getrendimento(){
    return this->rendimento;
}

// metodos
void Poupanca::calcula_rendimento(){
    cout << "valor do rendimento: " << getsaldo() * getrendimento() << endl;
}