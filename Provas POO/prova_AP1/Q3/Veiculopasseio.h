#ifndef VEICULOPASSEIO_H
#define VEICULOPASSEIO_H
#include "Veiculo.h"
#include<iostream>
#pragma once

class Veiculopasseio: public virtual Veiculo{
private:
    float volumeinterno;
public:
    Veiculopasseio() = default;
    float getVolumeInterno();
    void setVolumeInterno(float volumeinterno);
    float peso_potencia();
    void print();
};

#endif
