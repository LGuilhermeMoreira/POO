#ifndef CD_H
#define CD_H
#include "Midia.hpp"
#include <vector>
#include <iostream>

class CD : public Midia{
private:
    int duracao;
    float volume;
    bool coletanea;
public:
    // gets
    int getDuracao();
    float getVolume();
    bool getColetanea();

    // sets
    void setDuracao(int duracao);
    void setVolume(float volume);
    void setColetanea(bool coletanea);

    // construtor
    CD(std::string artista, std::string titulo, int lancamento, std::string genero, std::vector<std::string> faixas, std::vector<std::string> keywords, int duracao, float volume, bool coletanea);
    CD() = default;

   // metodos
    bool operator <= (CD &a);
};



#endif