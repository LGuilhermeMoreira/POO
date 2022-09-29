#ifndef FRACAO_INCLUDED
#define FRACAO_INCLUDED
#include<iostream>

class Fracao{
private:
    double denominador;
    double numerodador;
public:
    // constructor
    Fracao() = default;
    Fracao(double a,double b);
    // metodos
    Fracao operator+(Fracao &a);
    Fracao operator-(Fracao &a);
    Fracao operator*(Fracao &a);
    Fracao operator/(Fracao &a);

    void div(double a, double b);

    void print();
};

#endif