#include <iostream>
#include "Data.h"
using namespace std;

// constructor
Data::Data(int dia, int mes, int ano)
{
    setano(ano);
    setmes(mes);
    setdia(dia);
}

// setter
void Data::setano(int ano)
{
    this->ano = ano;
}

void Data::setmes(int mes)
{
    this->mes = mes;
}

void Data::setdia(int dia)
{
    this->dia = dia;
}

// getter
int Data::getano()
{
    return this->ano;
}

int Data::getmes()
{
    return this->mes;
}

int Data::getdia()
{
    return this->dia;
}

// metodos
void Data::printdata()
{
    cout << "Data: " << getdia() << "/" << getmes() << "/" << getano() << endl;
}

void Data::numdias(int mes)
{
    int soma = 0;
    for (int i = 1; i <= mes; i++)
    {
        if (i % 2 == 0)
        {
            soma += 30;
        }
        else
        {
            soma += 31;
        }
    }

    cout << "numero de dias: " << soma << endl;
}

void Data::numdias(string mes)
{
    int cont, soma = 0;
    if (mes == "janeiro")
        cont = 1;
    else if (mes == "fevereiro")
        cont = 2;
    else if (mes == "março")
        cont = 3;
    else if (mes == "abril")
        cont = 4;
    else if (mes == "maio")
        cont = 5;
    else if (mes == "junho")
        cont = 6;
    else if (mes == "julio")
        cont = 7;
    else if (mes == "agosto")
        cont = 8;
    else if (mes == "setembro")
        cont = 9;
    else if (mes == "outubro")
        cont = 10;
    else if (mes == "novembro")
        cont = 11;
    else if (mes == "dezembro")
        cont = 12;

    for (int i = 1; i <= cont; i++)
    {
        if (i % 2 == 0)
        {
            soma += 30;
        }
        else
        {
            soma += 31;
        }
    }

    cout << "numero de dias: " << soma << endl;
}