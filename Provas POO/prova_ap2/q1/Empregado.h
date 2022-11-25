#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

class Empregado{
private:
    std::string nome;
public:
    Empregado(std::string a){
        nome = a;
    };

    virtual void print(){
        std::cout << "Nome: " << nome << std::endl;
        //std::cout << "Salario: " << calcula_salario() << std::endl;
    };
    virtual float calcula_salario() = 0;

    void set_nome(std::string nome){
        this->nome = nome;
    };

    std::string get_nome(){
        return this->nome;
    };

    virtual ~Empregado(){};    
};

#endif