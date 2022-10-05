#include<iostream>
#include "ProfHorista.h"
using namespace std;

string ProfHorista::getNome(){
    return nome;
}

string ProfHorista::getMatricula(){
    return matricula;
}

int ProfHorista::getIdade(){
    return idade;
}

int ProfHorista::getTotalhoras(){
    return totalhoras;
}

float ProfHorista::getSalariohora(){
    return salariohora;
}

void ProfHorista::Create(string nome,string matricula, int idade, int totalhoras, float salariohora){
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
    this->totalhoras = totalhoras;
    this->salariohora = salariohora;
}