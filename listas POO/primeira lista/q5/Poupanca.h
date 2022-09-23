#include <iostream>
#include <string>
#include "Conta.h"
using namespace std;

class Poupanca: public Conta{
    private:
        double rendimento;
    public:
        // sets
        void setrendimento(double);
        // gets
        double getrendimento();
        // constructor
        Poupanca(double);
        // metodos
        double calcula_rendimento();
};
