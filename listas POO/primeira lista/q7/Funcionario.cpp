#include <iostream>
#include <string>
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario()
{
}

void Funcionario::setnome(string nome)
{
    this->nome = nome;
}

void Funcionario::setsalario(float salario)
{
    this->salario = salario;
}

void Funcionario::setturno(string turno)
{
    this->turno = turno;
}

void Funcionario::setRG(string RG)
{
    this->RG = RG;
}

string Funcionario::getnome()
{
    return nome;
}

float Funcionario::getsalario()
{
    return salario;
}

string Funcionario::getturno()
{
    return turno;
}

string Funcionario::getRG()
{
    return RG;
}