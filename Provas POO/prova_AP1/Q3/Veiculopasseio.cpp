#include<iostream>
#include"Veiculopasseio.h"
using namespace std;

float Veiculopasseio::getVolumeInterno(){
    return volumeinterno;
}

void Veiculopasseio::setVolumeInterno(float volumeinterno){
    this->volumeinterno = volumeinterno;
}

float Veiculopasseio::peso_potencia(){
    return Veiculo::getPeso()/Veiculo::getPotencia();
}

void Veiculopasseio::print(){
    cout << "Volume interno: " << getVolumeInterno() << endl;
    cout << "Peso/potencia: " << peso_potencia() << endl;
}