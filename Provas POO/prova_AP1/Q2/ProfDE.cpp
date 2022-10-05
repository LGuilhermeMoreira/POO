#include<iostream>
#include"ProfDE.h"
using namespace std;

string ProfDE::getNome(){
    return nome;
}

string ProfDE::getMatricula(){
    return matricula;
}

int ProfDE::getIdade(){
    return idade;
}

float ProfDE::getSalario(){
    return salario;
}

void ProfDE::Create(string nome, string matricula, int idade, float salario){
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
    this->salario = salario;
}