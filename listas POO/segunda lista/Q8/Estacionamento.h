#ifndef ESTACIONAMENTO_INCLUDED
#define ESTACIONAMENTO_INCLUDED
#include "Tempo.h"
#include<iostream>

class Estacionamento: public Tempo{
    private:
        std::string modelo,placa;
    public:
        //gets
        std::string getmodelo();
        std::string getplaca();
        int gethr1();
        int gethr2();
        //sets
        void setmodelo(std::string);
        void setplaca(std::string);
        //cons
        Estacionamento(std::string,std::string);
        Estacionamento() = default;
        //metodos
        double calculacusto(Tempo &j);
        void print(Tempo &j);
};

#endif