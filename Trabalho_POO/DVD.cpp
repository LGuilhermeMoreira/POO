#include "DVD.hpp"
#include <iostream>
#include <vector>
using namespace std;

// construtor
DVD::DVD(string artista, string titulo, int lancamento, string genero, vector<string> faixas, vector<string> keywords, std::vector<std::string> formatoaudio, std::vector<std::string> formatotela, std::vector<std::string> legendas) : Midia(artista, titulo, lancamento, genero, faixas, keywords){
    this->formatoaudio = formatoaudio;
    this->formatotela = formatotela;
    this->legendas = legendas;
}

// gets
std::vector<std::string> DVD::getFormatoAudio(){
    return formatoaudio;
}

std::vector<std::string> DVD::getFormatoTela(){
    return formatotela;
}

std::vector<std::string> DVD::getLegendas(){
    return legendas;
}

// sets
void DVD::setFormatoAudio(std::vector<std::string> formatoaudio){
    this->formatoaudio = formatoaudio;
}

void DVD::setFormatoTela(std::vector<std::string> formatotela){
    this->formatotela = formatotela;
}

void DVD::setLegendas(std::vector<std::string> legendas){
    this->legendas = legendas;
}

// metodos

bool DVD::operator<=(DVD &a){
    return this->getTitulo() <= a.getTitulo();
}
