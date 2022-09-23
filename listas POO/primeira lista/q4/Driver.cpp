#include<iostream>
using namespace std;
#include "PacoteDoisDias.h"

int main(){

    int peso,taxa,preco;

    cout << "informe o peso: ";
    cin >> peso;

    cout << "preco: ";
    cin >> preco;

    cout << "taxa: ";
    cin >> taxa;

    // testando os objetos
    Pacote *box = new Pacote("a", "b", "c", "d", "e", "f", "g", "h", "i","j",peso,preco);
    cout << "custo do pacote: " <<box->CalculaCusto() << endl;

    PacoteOverNight *overnight = new PacoteOverNight("a", "b", "c", "d", "e", "f", "g", "h", "i","j",peso,preco,taxa);
    cout << "custo do pacote na over night: "<< overnight->CalculaCusto() << endl;

    PacoteDoisDias *d = new PacoteDoisDias("a", "b", "c", "d", "e", "f", "g", "h", "i", "j",peso, preco,taxa);
    cout << "custo do pacote no dois dias: "<< d->CalculaCusto() << endl;
}