#include <iostream>
using namespace std;
#include "Veiculo.h"

// construtores
Veiculo::Veiculo(){};

Veiculo::Veiculo(float peso, float velmax, float preco)
{
    setpeso(peso);
    setvelmax(velmax);
    setpreco(preco);
};

// gets
float Veiculo::getpeso()
{
    return peso;
}

float Veiculo::getvelmax()
{
    return velmax;
}

float Veiculo::getpreco()
{
    return preco;
}

// sets
void Veiculo::setpeso(float peso)
{
    this->peso = peso;
}

void Veiculo::setvelmax(float velmax)
{
    this->velmax = velmax;
}

void Veiculo::setpreco(float preco)
{
    this->preco = preco;
}

// metodos
void Veiculo::print()
{
    cout << "caracteristicas do Veiculo" << endl;
    cout << "peso: " << getpeso() << endl;
    cout << "velocidade maxima: " << getvelmax() << endl;
    cout << "preco: " << getpreco() << endl;
}