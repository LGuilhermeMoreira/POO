#include "Caminhao.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    float peso = 500; 
    float velocidade_maxima = 40; 
    float preco = 1.5;
    int numero_cilindros = 8;
    float potencia = 9988;
    string modelo = "maveric",cor = "laranja";
    float altura = 13,tonelada = 5,comprimento = 32;

    CarroPasseio *car = new CarroPasseio(peso,velocidade_maxima,preco,numero_cilindros,potencia,cor,modelo);
    car -> print_carropasseio();

    Caminhao *caminhao = new Caminhao(peso,velocidade_maxima,preco,numero_cilindros,potencia,altura,tonelada,comprimento);
    caminhao -> print_caminhao();
}