#include<iostream>
#include "Veiculoutilitario.h"
using namespace std;

Veiculoutilitario::Veiculoutilitario(float c):Veiculocarga(c){}

float Veiculoutilitario::peso_potencia(){
    return Veiculocarga::peso_potencia();
}

void Veiculoutilitario::print(){
    cout << "=======================" << endl;
    Veiculo::print();
    cout << "=======================" << endl;
    Veiculocarga::print();
    cout << "=======================" << endl;
    Veiculopasseio::print();
    cout << "=======================" << endl;
}


Veiculoutilitario Veiculoutilitario :: operator+(Veiculoutilitario &v){
    Veiculoutilitario aux;
    aux.setPeso(Veiculo::getPeso()+v.getPeso());
    aux.setPotencia(Veiculo::getPotencia()+v.getPotencia());
    aux.setCarga(Veiculocarga::getCarga()+v.getCarga());    
    return aux;
}

Veiculoutilitario Veiculoutilitario :: operator/(Veiculoutilitario &v){
    Veiculoutilitario aux;
    
    aux.setPeso(Veiculo::getPeso()/v.getPeso());
    aux.setPotencia(Veiculo::getPotencia()/v.getPotencia());
    aux.setCarga(Veiculocarga::getCarga()/v.getCarga());
    
    return aux;
}
