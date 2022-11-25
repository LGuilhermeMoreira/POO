#ifndef MIDIA_H
#define MIDIA_H
#include <vector>
#include <iostream>

class Midia{
private:
    std::string artista;
    std::string titulo;
    int lancamento;
    std::string genero;
    std::vector<std::string> faixas;
    std::vector<std::string> keywords;
public:
    // gets
    std::string getArtista();
    std::string getTitulo();
    int getLancamento();
    std::string getGenero();
    std::vector<std::string> getFaixas();
    std::vector<std::string> getKeywords();

    // sets
    void setArtista(std::string artista);
    void setTitulo(std::string titulo);
    void setLancamento(int lancamento);
    void setGenero(std::string genero);
    void setFaixas(std::vector<std::string> faixas);
    void setKeywords(std::vector<std::string> keywords);

    // construtor
    Midia(std::string artista, std::string titulo, int lancamento, std::string genero, std::vector<std::string> faixas, std::vector<std::string> keywords);
    Midia() = default;
};


#endif