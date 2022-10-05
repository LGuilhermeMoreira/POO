#include<iostream>
#include "Veiculo.h"
using namespace std;

string Veiculo::getNome(){
    return nome;
}

float Veiculo::getPeso(){
    return peso;
}

float Veiculo::getPotencia(){
    return potencia;
}

void Veiculo::setNome(string nome){
    this->nome = nome;
}

void Veiculo::setPeso(float peso){
    this->peso = peso;
}

void Veiculo::setPotencia(float potencia){
    this->potencia = potencia;
}

void Veiculo::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Potencia: " << getPotencia() << endl;
}

Veiculo::Veiculo(float potencia){
    if(potencia > 0){
        this->potencia = potencia;
    }
    else{
        this->potencia = 1;
    }
}