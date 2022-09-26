#include<iostream>
#include"SuperHeroi.h"

// constructor
SuperHeroi::SuperHeroi(std::string nome, std::string lingua, std::string etinia, std::string nome_inceto, std::string codinome, std::string trauma, std::string poder, bool h, bool i, bool j, char k, int l){
    Humano::setnome(nome);
    Inceto::setnome(nome_inceto);
    setlingua(lingua);
    setetinia(etinia);
    setcodinome(codinome);
    settrauma(trauma);
    setpoderes(poder);
    setvenenoso(h);
    setalado(i);
    setferrao(j);
    setsexo(k);
    setidade(l);
}

// gets
std::string SuperHeroi::getcodinome(){
    return this->codenome;
}

std::string SuperHeroi::gettrauma(){
    return this->trauma;
}

std::string SuperHeroi::getpoderes(){
    return this->poderes;
}

// sets

void SuperHeroi::setcodinome(std::string codenome){
    this->codenome = codenome;
}

void SuperHeroi::settrauma(std::string trauma){
    this->trauma = trauma;
}

void SuperHeroi::setpoderes(std::string poderes){
    this->poderes = poderes;
}

// metodos

void SuperHeroi::print(){
    std::cout << "--caracteristicas do Humano--" << std::endl;
    std::cout << "Nome: " << Humano::getnome() << std::endl;
    std::cout << "Etinia: " << getetinia() << std::endl;
    std::cout << "Lingua: " << getlingua() << std::endl;
    std::cout << "Idade: " << getidade() << std::endl;
    std::cout << "Sexo: " << getsexo() << std::endl << std::endl;
    
    std::cout << "--Caracteristicas do Incetos--" << std::endl;
    std::cout << "1 - sim" << std::endl << "0 - nao" << std::endl;
    std::cout << "Nome do inceto: " << Inceto::getnome() << std::endl;
    std::cout << "Tem veneno: " << getvenenoso() << std::endl;
    std::cout << "Tem asa: " << getalado() << std::endl;
    std::cout << "Tem Ferrao: " << getferrao() << std::endl << std::endl;
    
    std::cout << "-- Caracteristicas do Super heroi--" << std::endl;
    std::cout << "Codinome: " << getcodinome() << std::endl;
    std::cout << "Trauma: " << gettrauma() << std::endl;
    std::cout << "Poder: " << getpoderes() << std::endl;

}