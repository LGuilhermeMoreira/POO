#include<iostream>
#include"Poupanca.h"
#include"Conta_corrente.h"
using namespace std;

int main(){
    double taxa,saldo,rendimento;
    cout << "informe taxa, saldo e rendimento" << endl;
    cin >> taxa >> saldo >> rendimento;

    Poupanca *p = new Poupanca(saldo,rendimento);
    p->calcula_rendimento();
    Conta_corrente *c = new Conta_corrente(saldo,taxa);
    c->taxa_credito();
    cout << endl;
    c->taxa_debito();
    
}