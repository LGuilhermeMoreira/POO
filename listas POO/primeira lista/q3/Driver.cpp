#include<iostream>
#include"Caminhao.h"
using namespace std;

int main(){
    float peso = 500;
    float velocidade_maxima = 40;
    float preco = 1.5;
    int numero_cilindros = 8;
    float potencia = 9988;
    float altura = 13, tonelada = 5, comprimento = 32;

    Caminhao *c = new Caminhao(peso,velocidade_maxima,preco,numero_cilindros,potencia,altura,tonelada,comprimento);

    c->print_caminhao();
}