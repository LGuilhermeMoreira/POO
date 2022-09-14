#include "CarroPasseio.h"
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


    CarroPasseio *car = new CarroPasseio(peso,velocidade_maxima,preco,numero_cilindros,potencia,cor,modelo);
    car -> print_carropasseio();

}