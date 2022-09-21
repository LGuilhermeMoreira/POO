#include <iostream>
#include "Veiculo.h"
#pragma once
using namespace std;


class VeiculoAquatico: virtual public Veiculo{

    public:
        VeiculoAquatico();

        float getTamanho();
        void setTamanho(float);

        string getCor();
        void setCora(string);

        float getVel();
        void setVela(float); 

        void print();

    private:
        float tamanho;
        string cor;
        float Vel;
};