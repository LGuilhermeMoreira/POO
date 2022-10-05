#ifndef VEICULO_H
#define VEICULO_H
#include<iostream>
#pragma once

class Veiculo{
private:
    std::string nome;
    float peso,potencia;
public:
    Veiculo() = default;
    Veiculo(float potencia);
    std::string getNome();
    float getPeso();
    float getPotencia();
    void setNome(std::string nome);
    void setPeso(float peso);
    void setPotencia(float potencia);
    void print();
};


#endif