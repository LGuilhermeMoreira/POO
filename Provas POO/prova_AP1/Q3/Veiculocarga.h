#ifndef VEICULOCARGA_H
#define VEICULOCARGA_H
#include <iostream>
#include "Veiculo.h"
#pragma once

class Veiculocarga : public virtual Veiculo{
private:
    float carga;
public:
    Veiculocarga(float c);
    Veiculocarga() = default;
    void setCarga(float carga);
    void print();
    float getCarga();
    float peso_potencia();
};

#endif
