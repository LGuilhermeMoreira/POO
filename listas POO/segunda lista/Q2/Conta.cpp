#include <iostream>
#include "Conta.h"

Conta::Conta(double x)
{
    if (x >= 0)
        this->saldo = x;
    else
    {
        std::cout << "Valor insuficiente! ";
        std::cout << "Error" << std::endl;
        this->saldo = 0;
    }
}

double Conta::getsaldo()
{
    return this->saldo;
}

void Conta::Credito()
{
    double c;

    std::cout << "Digite um valor a ser adicionado: ";
    std::cin >> c;

    this->saldo += c;
}

void Conta::Debito()
{
    double c;

    std::cout << "Digite um valor a ser retirado: ";
    std::cin >> c;

    if (c > this->saldo)
    {
        std::cout << "Error" << std::endl;
        return;
    }

    this->saldo -= c;
}
