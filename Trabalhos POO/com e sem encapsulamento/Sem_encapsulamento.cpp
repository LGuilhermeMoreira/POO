#include <iostream>
using namespace std;

class Mercado
{
public:
    string porte_;
    Mercado(int n);
    int quantidade_funcionarios;
    string tipo;
    int lucro;
    string nome;
    void portee(int j);
    void imprimir();

private:
};

Mercado::Mercado(int n)
{
    if (n == 1)
    {
        tipo = "carne";
        lucro = 100000;
        nome = "novilha de ouro";
        quantidade_funcionarios = 500;
    }
    else if (n == 2)
    {
        tipo = "vegetal";
        lucro = 20000;
        nome = "feira";
        quantidade_funcionarios = 10;
    }
    else
    {
        tipo = "material";
        lucro = 150000;
        nome = "construtop";
        quantidade_funcionarios = 1000;
    }
};

void Mercado::portee(int j)
{
    if (j == 150000)
        porte_ = "grande";
    else if (j == 100000)
        porte_ = "medio";
    else if (j = 20000)
        porte_ = "pequeno";
}

void Mercado::imprimir()
{
    cout << "quantidade de funcionarios: " << quantidade_funcionarios << endl;
    cout << "tipo da empresa: " << tipo << endl;
    cout << "lucro da empresa: " << lucro << endl;
    cout << "nome da empresa: " << nome << endl;
    cout << "porte da empresa: " << porte_ << endl;
}

int main()
{
    Mercado *feira = new Mercado(2);
    Mercado *construtop = new Mercado(8);
    Mercado *novilha_de_ouro = new Mercado(1);

    feira->portee(20000);
    construtop->portee(150000);
    novilha_de_ouro->portee(100000);

    feira->imprimir();
    cout << endl;
    construtop->imprimir();
    cout << endl;
    novilha_de_ouro->imprimir();
}