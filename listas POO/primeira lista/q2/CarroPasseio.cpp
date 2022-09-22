#include "CarroPasseio.h"
#include<iostream>
#include<string>
using namespace std;

// construtores
CarroPasseio::CarroPasseio(float peso, float velmax, float preco, int num_cilindros, float potencia, string cor, string modelo):
Motor(peso,velmax,preco,num_cilindros,potencia){
    setcor(cor);
    setmodelo(modelo);
};

CarroPasseio::CarroPasseio(){};

// gets

string CarroPasseio::getcor(){
    return cor;
};

string CarroPasseio::getmodelo(){
    return modelo;
};

// sets

void CarroPasseio::setcor(string cor){
    this->cor = cor;
};

void CarroPasseio::setmodelo(string modelo){
    this->modelo = modelo;
};

void CarroPasseio::print(){
    Motor::print();
    cout << "caracteristicas do carro de passeio" << endl;
    cout << "cor: " << getcor() << endl;
    cout << "modelo: " << getmodelo() << endl;
}
