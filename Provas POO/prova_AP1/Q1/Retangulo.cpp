#include<iostream>
#include "Retangulo.h"
using namespace std;

float Retangulo::getBase(){
    return base;
}

float Retangulo::getAltura(){
    return altura;
}

float Retangulo::calculaArea(){
    return base*altura;
}

float Retangulo::calculaPerimetro(){
    return 2*(base+altura);
}

void Retangulo::setBase(float base){
    this->base = base;
}

void Retangulo::setAltura(float altura){
    this->altura = altura;
}

void Retangulo::print(){
    cout << "Base: " << getBase() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Area: " << calculaArea() << endl;
    cout << "Perimetro: " << calculaPerimetro() << endl;
}