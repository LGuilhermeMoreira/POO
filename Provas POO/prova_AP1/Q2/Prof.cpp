#include<iostream>
#include"Prof.h"
using namespace std;

string Prof::getNome(){
    return nome;
}

string Prof::getMatricula(){
    return matricula;
}

int Prof::getIdade(){
    return idade;
}

void Prof::Create(string nome, string matricula, int idade){
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
}