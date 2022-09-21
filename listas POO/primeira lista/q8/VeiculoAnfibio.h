#include <iostream>
#include "VeiculoAquatico.h"
#include "VeiculoTerrestre.h"
#pragma once

using namespace std;

class VeiculoAnfibio: public VeiculoAquatico, public VeiculoTerrestre{

    public:
        VeiculoAnfibio();

        int getNum_rodas();
        void setNum_rodas(int);

        float getVel_ter();
        void setVel_ter(float);

        float getVel_aqua();
        void setVel_aqua(float); 

        void print();
    private:
        int num_rodas;
        float vel_ter;
        float vel_aqua;

};