#ifndef EMPREGADO_HORISTA_H
#define EMPREGADO_HORISTA_H
#include <iostream>
#include "Empregado.h"

class EmpregadoHorista : public Empregado{
private:
    int horas{8};
    float valor_hora{60.55};
public:
    EmpregadoHorista(int a, float h,std::string n):Empregado(n){
        set_horas(a);
        set_valor_hora(h);
    }

    void print() override{
        Empregado::print();
        std::cout << "Horas: " << this->horas << std::endl;
        std::cout << "Valor por hora: " << this->valor_hora << std::endl;
        std::cout << "Salario: " << calcula_salario() << std::endl; 
    };
    float calcula_salario() override{
        if(this->horas <= 40){ 
            return this->horas * this->valor_hora;
        }else{
            return (40/valor_hora)+(horas-40)*(valor_hora*1.5);
        }
    };

    void set_horas(int horas){
        this->horas = horas;
    };

    int get_horas(){
        return this->horas;
    };

    void set_valor_hora(float valor_hora){
        this->valor_hora = valor_hora;
    };

    float get_valor_hora(){
        return this->valor_hora;
    };
};

#endif