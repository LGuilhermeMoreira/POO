#include<iostream>
#include"Humano.h"

// gets
std::string Humano::getnome(){
    return this->nome;
}

std::string Humano::getlingua(){
    return this->lingua;
}

std::string Humano::getetinia(){
    return this->etinia;
}

char Humano::getsexo(){
    return this->sexo;
}

int Humano::getidade(){
    return this->idade; 
}

// sets

void Humano::setnome(std::string nome){
    this->nome = nome;
}

void Humano::setlingua(std::string lingua){
    this->lingua = lingua;
}

void Humano::setetinia(std::string etinia){
    this->etinia = etinia;
}

void Humano::setsexo(char sexo){
    this->sexo = sexo;
}

void Humano::setidade(int idade){
    this->idade = idade;
}