#include <iostream>
using namespace std;

class Veiculo{

    public:
    Veiculo();

    float getPeso();
    void setPeso(float);

    float getValor();
    void setValor(float);

    float getAltura();
    void setAltura(float);

    void print();
    private:
        float peso;
        float valor;
        float altura;
};