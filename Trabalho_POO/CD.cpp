#include "CD.hpp"
#include <iostream>
#include <vector>
using namespace std;

// construtor
CD::CD(string artista, string titulo, int lancamento, string genero, vector<string> faixas, vector<string> keywords, int duracao, float volume, bool coletanea) : 
Midia(artista, titulo, lancamento, genero, faixas, keywords){
    this->duracao = duracao;
    this->volume = volume;
    this->coletanea = coletanea;
}

// gets
int CD::getDuracao(){
    return duracao;
}

float CD::getVolume(){
    return volume;
}

bool CD::getColetanea(){
    return coletanea;
}

// sets

void CD::setDuracao(int duracao){
    this->duracao = duracao;
}

void CD::setVolume(float volume){
    this->volume = volume;
}

void CD::setColetanea(bool coletanea){
    this->coletanea = coletanea;
}

// metodos
bool CD::operator<=(CD &a){
    return this->getTitulo() <= a.getTitulo();
}
