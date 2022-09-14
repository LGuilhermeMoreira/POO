#include <iostream>
using namespace std;

class Veiculo
{
private:
    float peso;
    float velmax;
    float preco;

public:
    // construtores
    Veiculo();
    Veiculo(float peso, float velmax, float preco);
    // gets
    float getpeso();
    float getvelmax();
    float getpreco();
    // sets
    void setpeso(float peso);
    void setvelmax(float velmax);
    void setpreco(float preco);
    // metodos
    void print();
};