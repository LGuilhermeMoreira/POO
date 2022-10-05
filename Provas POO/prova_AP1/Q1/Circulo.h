#ifndef CIRCULO_H
#define CIRCULO_H
#include<iostream>

class Circulo{
private:
    float raio;
public:
    Circulo() = default;
    float getRaio();
    void setRaio(float raio);
    float calculaArea();
    float calculaPerimetro();
    void print();
};

#endif