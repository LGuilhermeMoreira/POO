#include <iostream>
#include <string>
#include "Conta_corrente.h"
using namespace std;

Conta_corrente::Conta_corrente(double x,double taxa):Conta(x){
    settaxa(taxa);
}

void Conta_corrente::settaxa(double taxa){
    this->taxa = taxa;
}

double Conta_corrente::gettaxa(){
    return this->taxa;
}

void Conta_corrente::taxa_credito(){
    Conta::print_saldo_credito();
    double resp = getsaldo() - gettaxa();
    if(resp > 0){
        cout << "valor taxado: " << resp << endl;
        setsaldo(resp);
    }else{
        cout << "não é possivel taxar o saldo!" << endl;
    }
}

void Conta_corrente::taxa_debito(){
    Conta::print_saldo_debito();
    double resp = getsaldo() - gettaxa();
    if (resp > 0)
    {
        cout << "valor taxado: " << resp << endl;
        setsaldo(resp);
    }else
    {
        cout << "não é possivel taxar o saldo!" << endl;
    }
}