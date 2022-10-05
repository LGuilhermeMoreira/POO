#ifndef PROFHORISTA_H
#define PROFHORISTA_H
#include<iostream>

class ProfHorista{
private:
    std::string nome;
    std::string matricula;
    int idade;
    int totalhoras;
    float salariohora;
public:
    std::string getNome();
    std::string getMatricula();
    int getIdade();
    int getTotalhoras();
    float getSalariohora();
    void Create(std::string nome, std::string matricula, int idade, int totalhoras, float salariohora);
};

#endif
