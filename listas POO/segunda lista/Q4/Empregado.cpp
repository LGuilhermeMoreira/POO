#include<iostream>
#include<string>	
#include "Empregado.h"
using namespace std;

Empregado::Empregado(string nome, string sobrenome, float salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

void Empregado::setNome(string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(float salario){
    if(salario < 0){
        this->salario = 0;
    }else{
        this->salario = salario;
    }
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

float Empregado::getSalario(){
    return salario;
}

