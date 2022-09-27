#include <iostream>
#include <string>
#include "Conta.h"
using namespace std;

// sets
void Conta::setsaldo(double saldo){
    this->saldo = saldo;
}

// gets
double Conta::getsaldo(){
    return saldo;
}

// construtores
Conta::Conta(double saldo){
    setsaldo(saldo);
}

// metodos

void Conta::print_saldo_credito(){
    double c;
    cout << "informe o valor que deseja creditar: ";
    cin >> c;

    setsaldo(c+this->saldo);
}

void Conta::print_saldo_debito(){
    double s;
    cout << "informe o valor que deseja debitar: ";
    cin >> s;

    if(s > this->saldo){
        cout << "Valor indisponivel" << endl;
        return;
    }

    setsaldo(s-this->saldo);
}
