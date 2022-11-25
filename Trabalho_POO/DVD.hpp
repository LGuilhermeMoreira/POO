#ifndef DVD_H
#define DVD_H
#include "Midia.hpp"
#include <vector>
#include <iostream>

class DVD : public Midia{
private:
    std::vector<std::string> formatoaudio;
    std::vector<std::string> formatotela;
    std::vector<std::string> legendas;
public:
    // gets
    std::vector<std::string> getFormatoAudio();
    std::vector<std::string> getFormatoTela();
    std::vector<std::string> getLegendas();

    // sets
    void setFormatoAudio(std::vector<std::string> formatoaudio);
    void setFormatoTela(std::vector<std::string> formatotela);
    void setLegendas(std::vector<std::string> legendas);

    // construtor
    DVD(std::string artista, std::string titulo, int lancamento, std::string genero, std::vector<std::string> faixas, std::vector<std::string> keywords, std::vector<std::string> formatoaudio, std::vector<std::string> formatotela, std::vector<std::string> legendas);
    DVD() = default;

    // metodos
    bool operator<=(DVD &a);
   
};
#endif