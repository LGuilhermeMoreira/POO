#include <iostream>
#include "VeiculoAnfibio.h"

using namespace std;

VeiculoAnfibio::VeiculoAnfibio(){
};

void VeiculoAnfibio::setNum_rodas(int num_rodas){
    this -> num_rodas = num_rodas;
};

void VeiculoAnfibio::setVel_ter(float vel_ter){
    this -> vel_ter = vel_ter;
};

void VeiculoAnfibio::setVel_aqua(float vel_aqua){
    this -> vel_aqua = vel_aqua;
};


int VeiculoAnfibio::getNum_rodas(){
    return num_rodas;
};

float VeiculoAnfibio::getVel_ter(){
    return vel_ter;
};
float VeiculoAnfibio::getVel_aqua()
{
    return vel_aqua;
};

// add os outros prints
void VeiculoAnfibio::print(){
    Veiculo::print();
    VeiculoAquatico::print();
    VeiculoTerrestre::print();
    cout << "Numero de rodas = " << getNum_rodas() << endl;
    cout << "Velocidade na terra = " << getVel_ter() << endl;
    cout << "Velocidade na agua = " << getVel_aqua() << endl;
}