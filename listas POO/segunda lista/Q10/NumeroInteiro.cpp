#include "NumeroInteiro.h"
#include <iostream>
using namespace std;

NumeroInteiro::NumeroInteiro(int a, int b)
{
    if (b == 0)
    {
        cout << "ERROR! VALOR ALTERADO PARA 1" << endl;
        this->denominador = 1;
        this->numerador = a;
    }
    else
    {
        this->denominador = b;
        this->numerador = a;
    }

}

NumeroInteiro NumeroInteiro::operator+(NumeroInteiro &a)
{
    NumeroInteiro aux;
    aux.numerador = this->numerador + a.numerador;
    aux.denominador = this->denominador + a.denominador;
    return aux;
}

NumeroInteiro NumeroInteiro::operator-(NumeroInteiro &a)
{
    NumeroInteiro aux;
    aux.numerador = this->numerador - a.numerador;

    if(this->denominador - a.denominador == 0){
        aux.denominador = 1;
    }
    else{
        aux.denominador = this->denominador - a.denominador;
    }

    return aux;
}

NumeroInteiro NumeroInteiro::operator*(NumeroInteiro &a)
{
    NumeroInteiro aux;
    aux.denominador = this->denominador * a.denominador;
    aux.numerador = this->numerador * a.numerador;
    return aux;
}

NumeroInteiro NumeroInteiro::operator/(NumeroInteiro &a)
{
    NumeroInteiro aux;
    aux.denominador = this->denominador / a.denominador;
    aux.numerador = this->numerador / a.numerador;
    return aux;
}

void NumeroInteiro::div(int a, int b)
{ 
    if(denominador == 0)
    {
        cout << "Erro: denominador igual a zero" << endl;
        return;
    }

    cout << "divisao: " << a / b << endl;


}

void NumeroInteiro::print()
{
    cout << "numerador: " << this->numerador << endl;
    cout << "denominador: " << this->denominador << endl;
    div(numerador, denominador);
}