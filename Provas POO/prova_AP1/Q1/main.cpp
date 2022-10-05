#include<iostream>
#include"Cilindro.h"
using namespace std;

int main(){
    float raio, base, altura;
    Cilindro *c = new Cilindro();
    cout << "informe o raio,base e altura" << endl;
    cin >> raio >> base >> altura;

    c->setRaio(raio);
    c->setBase(base);
    c->setAltura(altura);

    c->print();
    return 0;
}
    
