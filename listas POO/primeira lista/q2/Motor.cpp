#include<iostream>
#include"Motor.h"
using namespace std;

// gets

int Motor::getnum_cilindros(){
    return num_cilindros;
};

float Motor::getpotencia(){
    return potencia;
};

// sets

void Motor::setpotencia(float potencia){
    this->potencia = potencia;
};

void Motor::setnum_cilindros(int num_cilindros){
    this->num_cilindros = num_cilindros;
};

// construtores

Motor::Motor(){};

Motor::Motor(float peso, float velmax, float preco,int num_cilindros,float potencia)
:Veiculo(peso,velmax,preco){
    setnum_cilindros(num_cilindros);
    setpotencia(potencia);
}

// metodos

void Motor::print(){
    Veiculo::print();
    cout << endl << "caracteristicas do Motor" << endl;
    cout << "numero de cilindros: " << getnum_cilindros() << endl;
    cout << "potencia: " << getpotencia() << endl << endl;
}