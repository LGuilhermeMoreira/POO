#include<iostream>
#include "Circulo.h"
using namespace std;

float Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(float raio){
    this->raio = raio;
}

float Circulo::calculaArea(){
    return 3.14*raio*raio;
}

float Circulo::calculaPerimetro(){
    return 2*3.14*raio;
}

void Circulo::print(){
    cout << "Raio: " << getRaio() << endl;
    cout << "Area: " << calculaArea() << endl;
    cout << "Perimetro: " << calculaPerimetro() << endl;
}