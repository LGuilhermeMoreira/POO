#include <iostream>
#include "VeiculoTerrestre.h"

using namespace std;

VeiculoTerrestre::VeiculoTerrestre(){
};

void VeiculoTerrestre::setNum_rodasx(int num_rodas)
{
    this -> num_rodas = num_rodas;
};

void VeiculoTerrestre::setCort(string cor)
{
    this -> cor = cor;
};

void VeiculoTerrestre::setVelt(float vel)
{
    this -> vel = vel;
};

float VeiculoTerrestre::getVel()
{
    return vel;
};

int VeiculoTerrestre::getNum_rodas()
{
    return num_rodas;
};

string VeiculoTerrestre::getCor()
{
    return cor;
};

void VeiculoTerrestre::print()
{
    cout << "Numero de rodas = " << getNum_rodas() << endl;
    cout << "Cor = " << getCor() << endl;
    cout << "Velocidade = " << getVel() << endl;
}