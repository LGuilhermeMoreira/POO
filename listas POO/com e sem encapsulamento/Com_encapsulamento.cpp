#include <iostream>
using namespace std;

class Mercado
{
private:
    int quantidade_funcionarios;
    int lucro;
    string nome;
    string tipo;

public:
    // construtor
    Mercado();
    // get
    int getquantidade_funcionarios();
    int getlucro();
    string getnome();
    string gettipo();
    // string getporte_();
    //  set
    void setquantidade_funcionarios(int n);
    void setlucro(int n);
    void setnome(string n);
    void settipo(string n);
    // void setporte_(string n);
    //  metodos
    void porte(int j, string *n);
    void imprimir(string *n);
};

// construtor

Mercado::Mercado(){

};

// set

void Mercado::setquantidade_funcionarios(int n)
{
    quantidade_funcionarios = n;
};

void Mercado::setlucro(int n)
{
    lucro = n;
}

void Mercado::setnome(string n)
{
    nome = n;
};

void Mercado::settipo(string n)
{
    tipo = n;
};

// get

int Mercado::getquantidade_funcionarios()
{
    return quantidade_funcionarios;
};

int Mercado::getlucro()
{
    return lucro;
};

string Mercado::getnome()
{
    return nome;
};

string Mercado::gettipo()
{
    return tipo;
};

void Mercado::porte(int j, string *n)
{
    if (j < 20000)
        *n = "pequeno";
    else if (j < 100000)
        *n = "medio";
    else
        *n = "grande";
};

void Mercado::imprimir(string *n)
{
    cout << "quantidade de funcionarios: " << getquantidade_funcionarios() << endl;
    cout << "tipo da empresa: " << gettipo() << endl;
    cout << "lucro da empresa: " << getlucro() << endl;
    cout << "nome da empresa: " << getnome() << endl;
    cout << "porte da empresa: " << *n << endl;
}

int main()
{
    Mercado *mercadinho = new Mercado();
    string nome, tipo;
    int lucro, funcio;

    cout << "informe o nome,tipo,lucro e quantidade de funcionario" << endl;
    cin >> nome >> tipo >> lucro >> funcio;

    mercadinho->setnome(nome);
    mercadinho->settipo(tipo);
    mercadinho->setquantidade_funcionarios(funcio);
    mercadinho->setlucro(lucro);

    string j;

    mercadinho->porte(lucro, &j);

    mercadinho->imprimir(&j);
}