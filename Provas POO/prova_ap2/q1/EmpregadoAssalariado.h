#ifndef EMPREGADO_ASSALARIADO_H
#define EMPREGADO_ASSALARIADO_H
#include <iostream>
#include "Empregado.h"

class EmpregadoAssalariado : public Empregado{
private:
    float salario;
public:
    EmpregadoAssalariado(std::string a,float salario):Empregado(a){
        set_salario(salario);
    }

    void print() override{
        Empregado::print();
        std::cout << "Salario: " << this->salario << std::endl; 
    };
    float calcula_salario() override{
        return this->salario;
    };
    void set_salario(float salario){
        this->salario = salario;
    };

};

#endif