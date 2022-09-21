#include <iostream>
#include "Veiculo.h"

using namespace std;

class VeiculoAquatico: virtual public Veiculo{

    public:
        VeiculoAquatico();

        float getTamanho();
        void setTamanho(float);

        string getCor();
        void setCor(string);

        float getVel();
        void setVel(float); 

        void print();

    private:
        float tamanho;
        string cor;
        float Vel;
};