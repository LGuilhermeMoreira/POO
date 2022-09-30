#include"Complex.h"
#include<iostream>
#include<cmath>
using namespace std;

Complex::Complex(double real, double imag){
    this->real = real;
    this->imag = imag;
}

Complex Complex::operator+(const Complex &right) const{
    return Complex(real + right.real, imag + right.imag);
}

Complex Complex::operator-(const Complex &right) const{
    return Complex(real - right.real, imag - right.imag);
}

Complex Complex::operator*(const Complex &right) const{
    return Complex(real * right.real, imag * right.imag);
}

bool Complex::operator!=(const Complex &right) const{
    if(real != right.real && imag != right.imag){
        return true;
    }
    else{
        return false;
    }
} 

bool Complex::operator==(const Complex &right) const{
    if(real == right.real && imag == right.imag){
        return true;
    }
    else{
        return false;
    }
}


void Complex::print() const{
    cout << '(' << real << ", " << imag << ')' << endl;
    cout << "numero complexo: " << (real+imag) << "*(-1)^1/2"<< endl;
}