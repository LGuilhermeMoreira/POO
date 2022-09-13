#include<iostream>
#include"Restaurante.h"
using namespace std;

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone,
string tipo,float preco): Empresa(nome,endereco,cidade,estado,cep,telefone){
    settipo(tipo);
    setpreco(preco);
};


void Restaurante::settipo(string tipo){
    this->tipo = tipo;
};

void Restaurante::setpreco(float preco){
    this->preco = preco;
};

string Restaurante::gettipo(){
    return tipo;
};

float Restaurante::getpreco(){
    return preco;
};

void Restaurante::printa(){
    print();
    cout << "Tipo: " << gettipo() << endl;
    cout << "preco: " << getpreco() << endl;
};