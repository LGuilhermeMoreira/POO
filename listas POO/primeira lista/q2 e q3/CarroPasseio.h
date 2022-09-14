#include <iostream>
#include "Motor.h"
#include<string>
using namespace std;

class CarroPasseio : public Veiculo,Motor{
    private:
        string cor;
        string modelo;
    public:
        // sets
        void setcor(string cor);
        void setmodelo(string modelo);
        // gets
        string getcor();
        string getmodelo();
        // metodos
        void print_carropasseio();
        // construtores
        CarroPasseio();
        CarroPasseio(float peso, float velmax, float preco, int num_cilindros, float potencia,string cor, string modelo);
};