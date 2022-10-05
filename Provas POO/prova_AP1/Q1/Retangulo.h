#ifndef RETANGULO_H
#define RETANGULO_H
#include<iostream>

class Retangulo{
private:
    float base;
    float altura;
public:
    Retangulo() = default;
    float getBase();
    float getAltura();
    float calculaArea();
    float calculaPerimetro();
    void setBase(float base);
    void setAltura(float altura);
    void print();
};


#endif // RETANGULO_H