#include "Caminhao.h"
#include <iostream>
using namespace std;

// construtores
Caminhao::Caminhao(float peso, float velmax, float preco, int num_cilindros, float potencia, float altura, float tonelada, float comprimento)
    : Motor(peso, velmax, preco, num_cilindros, potencia)
{
    setaltura(altura);
    settonelada(tonelada);
    setcomprimento(comprimento);
};

// sets
void Caminhao::setaltura(float altura)
{
    this->altura = altura;
};

void Caminhao::settonelada(float tonelada)
{
    this->tonelada = tonelada;
};

void Caminhao::setcomprimento(float comprimento)
{
    this->comprimento = comprimento;
};

// gets

float Caminhao::getaltura()
{
    return altura;
};

float Caminhao::gettonelada()
{
    return tonelada;
};

float Caminhao::getcomprimento()
{
    return comprimento;
};

// metodos

void Caminhao::print()
{
    Motor::print();
    cout << "Caracteristicas do caminhao" << endl;
    cout << "altura: " << getaltura() << endl;
    cout << "tonelada: " << gettonelada() << endl;
    cout << "comprimento: " << getcomprimento() << endl;
}