#include "Midia.hpp"
#include <iostream>
#include <vector>
using namespace std;

// construtor
Midia::Midia(string artista, string titulo, int lancamento, string genero, vector<string> faixas, vector<string> keywords){
    this->artista = artista;
    this->titulo = titulo;
    this->lancamento = lancamento;
    this->genero = genero;
    this->faixas = faixas;
    this->keywords = keywords;
}
// gets
string Midia::getArtista(){
    return artista;
}

string Midia::getTitulo(){
    return titulo;
}

int Midia::getLancamento(){
    return lancamento;
}

string Midia::getGenero(){
    return genero;
}

vector<string> Midia::getFaixas(){
    return faixas;
}

vector<string> Midia::getKeywords(){
    return keywords;
}

// sets

void Midia::setArtista(string artista){
    this->artista = artista;
}

void Midia::setTitulo(string titulo){
    this->titulo = titulo;
}

void Midia::setLancamento(int lancamento){
    this->lancamento = lancamento;
}

void Midia::setGenero(string genero){
    this->genero = genero;
}

void Midia::setFaixas(vector<string> faixas){
    this->faixas = faixas;
}

void Midia::setKeywords(vector<string> keywords){
    this->keywords = keywords;
}

