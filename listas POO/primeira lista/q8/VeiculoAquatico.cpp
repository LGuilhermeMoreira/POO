#include <iostream>
#include "VeiculoAquatico.h"

using namespace std;

VeiculoAquatico::VeiculoAquatico(){
};

void VeiculoAquatico::setTamanho(float tamanho){
    this -> tamanho = tamanho;
};

void VeiculoAquatico::setCor(string cor){
    this -> cor = cor;
};

void VeiculoAquatico::setVel(float vel){
    this -> Vel = vel;
};

float VeiculoAquatico::getTamanho(){
    return tamanho;
};

string VeiculoAquatico::getCor(){
    return cor;
};

float VeiculoAquatico::getVel(){
    return Vel;
};

void VeiculoAquatico::print(){
    cout << "Tamanho = " << getTamanho() << endl;
    cout << "Cor = " << getCor() << endl;
    cout << "Velocidade = " << getVel() << endl;
}