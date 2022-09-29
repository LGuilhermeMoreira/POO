#ifndef NUMINT_INCLUDED
#define NUMINT_INCLUDED
#include <iostream>

class NumeroInteiro
{
private:
    int numerador;
    int denominador;

public:
    // constructor
    NumeroInteiro() = default;
    NumeroInteiro(int a, int b);
    // metodos
    NumeroInteiro operator+(NumeroInteiro &a);
    NumeroInteiro operator-(NumeroInteiro &a);
    NumeroInteiro operator*(NumeroInteiro &a);
    NumeroInteiro operator/(NumeroInteiro &a);

    void div(int a, int b);

    void print();
};

#endif