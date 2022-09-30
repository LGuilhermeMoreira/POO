#include"Fracao.h"
#include<iostream>
using namespace std;

Fracao::Fracao(double a, double b)
{
    if(b == 0){
        cout << "ERROR! VALOR ALTERADO PARA 1"<< endl;
        this->denominador = 1;
    }
    else{
        this->denominador = b;
        this->numerodador = a;
    }
}

void Fracao::div(double a, double b)
{
    float resp = a / b;
    cout << "divisao: " << resp << endl;
}

void Fracao::print(){
    cout << "valor do numerodador: " << this->numerodador << endl;
    cout << "valor do denominador: " << this->denominador << endl;
    Fracao::div(this->numerodador, this->denominador);
}

Fracao Fracao::operator+(Fracao &a){
    Fracao aux;
    aux.denominador = this->denominador + a.denominador;
    aux.numerodador = this->numerodador + a.numerodador;
    return aux;
}

Fracao Fracao::operator-(Fracao &a){
    Fracao aux;
    aux.numerodador = this->numerodador - a.numerodador;
    if(this->denominador - a.denominador == 0){
        aux.denominador = 1;
    }
    else{
        aux.denominador = this->denominador - a.denominador;
    }
}

Fracao Fracao::operator*(Fracao &a){
    Fracao aux;
    aux.denominador = this->denominador * a.denominador;
    aux.numerodador = this->numerodador * a.numerodador;
    return aux;
}

Fracao Fracao::operator/(Fracao &a){
    Fracao aux;
    aux.denominador = this->denominador / a.denominador;
    aux.numerodador = this->numerodador / a.numerodador;
    return aux;
}

bool Fracao::operator!=(Fracao &a){
    if(this->denominador != a.denominador && this->numerodador != a.numerodador){
        return true;
    }
    else{
        return false;
    }
}

bool Fracao::operator==(Fracao &a){
    if(this->denominador == a.denominador && this->numerodador == a.numerodador){
        return true;
    }
    else{
        return false;
    }
}