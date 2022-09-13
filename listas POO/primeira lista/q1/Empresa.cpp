#include<iostream>
#include"Empresa.h"
using namespace std;

// gets
string Empresa::getnome(){
    return this->nome;
};

string Empresa::getendereco(){
    return this->endereco;
};

string Empresa::getcidade(){
    return this->cidade;
};

string Empresa::getestado(){
    return this->estado;
};

string Empresa::getcep(){
    return this->cep;
};

string Empresa::gettelefone(){
    return this->telefone;
};

// sets

void Empresa::setnome(string nome){
    this->nome = nome;
};

void Empresa::setendereco(string endereco){
    this->endereco = endereco;
};           

void Empresa::setcidade(string cidade){
    this->cidade = cidade;
};

void Empresa::setestado(string estado){
    this->estado = estado;
};

void Empresa::setcep(string cep){
    this->cep = cep;
};

void Empresa::settelefone(string telefone){
    this->telefone = telefone;
};

// construtores e destrutores

Empresa::Empresa(){

};

Empresa::~Empresa(){
    cout << "valeu!" << endl;
};

Empresa::Empresa(string nome,string endereco, string cidade , string estado, string cep, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
    this->telefone = telefone;
}

// metodos
void Empresa::print(){
    cout << "Nome: " << getnome() << endl;
    cout << "Endereco: " << getendereco() << endl;
    cout << "cidade: " << getcidade() << endl;
    cout << "Estado: " << getestado() << endl;
    cout << "Cep: " << getcep() << endl;
    cout << "Telefone: " << gettelefone() << endl;
};