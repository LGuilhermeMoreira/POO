#include<iostream>
#include"Estacionamento.h"
using namespace std;

// gets
std::string Estacionamento::getmodelo(){
    return modelo;
}

std::string Estacionamento::getplaca(){
    return placa;
}

// sets
void Estacionamento::setmodelo(std::string a){
    this->modelo = a;
}
void Estacionamento::setplaca(std::string a){
    this->placa = a;
}

// cons
Estacionamento::Estacionamento(string a, string b){
    setmodelo(a);
    setplaca(b);
    
}
// metodos
double Estacionamento::calculacusto(Tempo &j){
    double resp;
    resp = (double) j.gethr() * 1.5;
    return resp;
}

void Estacionamento::print(Tempo &j){
    cout << "modelo: " << getmodelo() << endl;
    cout << "placa: " << getplaca() << endl;
    cout << "Tempo no estacionamento: " << j.gethr() << endl;
    cout << "Custo do estacionamento: " << calculacusto(j) << endl;
}