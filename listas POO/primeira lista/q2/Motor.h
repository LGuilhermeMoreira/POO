#include <iostream>
#include "Veiculo.h"
using namespace std;

class Motor : public Veiculo
{
private:
    int num_cilindros;
    float potencia;
public:
    // gets
    int getnum_cilindros();
    float getpotencia();
    // sets
    void setnum_cilindros(int num_cilindros);
    void setpotencia(float potencia);
    // construtores
    Motor();
    Motor(float,float,float,int, float);
    // metodos
    void print_motor();
};