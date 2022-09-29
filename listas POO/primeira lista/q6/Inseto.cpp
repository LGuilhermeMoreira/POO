#include<iostream>
#include"Inseto.h"

// gets

std::string Inceto::getnome(){
    return this->nome;
}

bool Inceto::getvenenoso(){
    return this->venenoso;
}

bool Inceto::getalado(){
    return this->alado;
}

bool Inceto::getferrao(){
    return this->ferrao;
}

// sets

void Inceto::setnome(std::string nome){
    this->nome = nome;
}

void Inceto::setvenenoso(bool venenoso){
    this->venenoso = venenoso;
}

void Inceto::setferrao(bool ferrao){
    this->ferrao = ferrao;
}

void Inceto::setalado(bool alado){
    this->alado = alado;
}