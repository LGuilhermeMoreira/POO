#ifndef COMPLEX_INCLUDED
#define COMPLEX_INCLUDED

class Complex{
private:
    double real;
    double imag;
public:
    Complex(double = 0.0, double = 0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    void print() const;
    Complex operator*(const Complex &) const;
    bool operator!=(const Complex &) const;
    bool operator==(const Complex &) const;
};

#endif