#include <iostream>
#pragma once
#include "Veiculo.h"

using namespace std;

class VeiculoTerrestre: virtual public Veiculo{

    public:
        VeiculoTerrestre();

        int getNum_rodas();
        void setNum_rodasx(int);

        string getCor();
        void setCort(string);

        float getVel();
        void setVelt(float); 

        void print();
    private:
        int num_rodas;
        string cor;
        float vel;
};