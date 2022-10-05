#ifndef PROF_H
#define PROF_H
#include "ProfHorista.h"
#include "ProfDE.h"
#include<iostream>

class Prof: public ProfDE, public ProfHorista{
private:
    std::string nome;
    std::string matricula;
    int idade;
public:
    std::string getNome();
    std::string getMatricula();
    int getIdade();
    void Create(std::string nome, std::string matricula, int idade);
};

#endif