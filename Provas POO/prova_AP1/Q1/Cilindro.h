#ifndef CILINDRO_H
#define CILINDRO_H
#include<iostream>
#include "Circulo.h"
#include "Retangulo.h"

class Cilindro: public Circulo, public Retangulo{
    public:
        Cilindro() = default;
        float calculaVolume();
        float calculaArea();
        void print();
};


#endif