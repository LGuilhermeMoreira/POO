#ifndef VEICULOUTILITARIO_H
#define VEICULOUTILITARIO_H
#include "Veiculopasseio.h"
#include "Veiculocarga.h"
#pragma once
#include<iostream>

class Veiculoutilitario: public Veiculopasseio, public Veiculocarga{
public:
    Veiculoutilitario(float c);
    Veiculoutilitario() = default;
    float peso_potencia();
    void print();
    Veiculoutilitario operator+(Veiculoutilitario &v);
    Veiculoutilitario operator/(Veiculoutilitario &v); 
};

#endif

