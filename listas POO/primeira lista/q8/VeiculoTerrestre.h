#include <iostream>
#include "Veiculo.h"

using namespace std;

class VeiculoTerrestre: virtual public Veiculo{

    public:
        VeiculoTerrestre();

        int getNum_rodas();
        void setNum_rodas(int);

        string getCor();
        void setCor(string);

        float getVel();
        void setVel(float); 

        void print();
    private:
        int num_rodas;
        string cor;
        float vel;
};