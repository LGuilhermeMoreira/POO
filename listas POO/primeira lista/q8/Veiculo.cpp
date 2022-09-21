#include <iostream>
#include "Veiculo.h"

using namespace std;

Veiculo::Veiculo(){
};

void Veiculo::setPeso(float peso){
    this -> peso = peso;
};

void Veiculo::setValor(float valor){
    this -> valor = valor;
};

void Veiculo::setAltura(float altura){
    this -> altura = altura;
};

float Veiculo::getPeso(){
    return peso;
};

float Veiculo::getValor(){
    return valor;
};

float Veiculo::getAltura(){
    return altura;
};

void Veiculo::print(){
    cout << "Peso = " << getPeso() << endl;
    cout << "Valor = " << getValor() << endl;
    cout << "Altura = " << getAltura() << endl;
}