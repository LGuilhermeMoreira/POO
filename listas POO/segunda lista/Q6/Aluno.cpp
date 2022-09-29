#include<iostream>
#include<string>
#include"Aluno.h"
using namespace std;

// gets
string Aluno::getnome(){
    return this->nome;
}

int Aluno::getgrau(){
    return this->grau;
}

int Aluno::getserie(){
    return this->serie;
}

// sets
void Aluno::setnome(string nome){
    this->nome = nome;
}

void Aluno::setserie(int serie){
    this->serie = serie;
}

void Aluno::setgrau(int grau){
    this->grau = grau;
}

// construtor e destrutor
Aluno::Aluno(string nome,int grau,int serie){
    setnome(nome);
    setgrau(grau);
    setserie(serie);
}

Aluno::~Aluno(){
    cout << "FIM!" << endl;
}