#include<iostream>
#include "Veiculocarga.h"
using namespace std;

float Veiculocarga::getCarga(){
    return carga;
}

void Veiculocarga::setCarga(float carga){
    this->carga = carga;
}

float Veiculocarga::peso_potencia(){
    return (Veiculo::getPeso()+getCarga())/Veiculo::getPotencia();
}

void Veiculocarga::print(){
    cout << "Carga: " << getCarga() << endl;
    cout << "Peso/potencia: " << peso_potencia() << endl;
}

Veiculocarga::Veiculocarga(float c):Veiculo(c){}