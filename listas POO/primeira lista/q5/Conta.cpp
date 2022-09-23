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

/* está faltando informação de como é calculado o valor de credito 
e o valor de debito para gerar a mensagem de erro*/

void Conta::print_saldo_credito(){
    if(getsaldo() > getdebito){
        cout << "saldo do credito: " << getsaldo() << endl; 
    }else{
        cout << "ERRO" << endl;
    }
}

void Conta::print_saldo_debito(){
    if (getsaldo() > getdebito){
        cout << "saldo do debito: " << getsaldo() << endl;
    }
    else{
        cout << "ERRO" << endl;
    }
}
