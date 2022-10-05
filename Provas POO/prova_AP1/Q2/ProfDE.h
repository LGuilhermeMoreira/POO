#ifndef PROFDE_H
#define PROFDE_H
#include<iostream>

class ProfDE{
private:
    std::string nome;
    std::string matricula;
    int idade;
    float salario;
public:
    ProfDE() = default;

    std::string getNome(); 
    std::string getMatricula();
    int getIdade();
    float getSalario();
    
    void Create(std::string nome, std::string matricula, int idade, float salario);
    
};


#endif