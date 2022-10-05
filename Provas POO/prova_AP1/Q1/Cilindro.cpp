#include<iostream>
#include "Cilindro.h"
using namespace std;

float Cilindro::calculaVolume(){
    float resp = Circulo::calculaArea()*Retangulo::getAltura();
    return resp;
}

float Cilindro::calculaArea(){
    float resp = 2*Circulo::calculaArea() + Retangulo::calculaArea(); 
    return resp;
}

void Cilindro::print(){
    Circulo::print();
    Retangulo::print();
    cout << "Area = " << calculaArea() << endl;
    cout << "Volume = " << calculaVolume() << endl;
}