#include<iostream>
#include<string>
#include "Empregado.h"
using namespace std;

int main(){
    Empregado *v = new Empregado("Jucelino", "Kubitschek", 1000);
    Empregado *z = new Empregado("Lula", "Inacio", 2000);

    cout << "Salario de " << v->getNome() << " " << v->getSobrenome() << ": " << v->getSalario() << endl;
    cout << "Salario de " << z->getNome() << " " << z->getSobrenome() << ": " << z->getSalario() << endl;

    cout << endl << "novo salario" << endl << endl;

    v->setSalario(v->getSalario() * 1.1);
    z->setSalario(z->getSalario() * 1.1);

    cout << "Salario de " << v->getNome() << " " << v->getSobrenome() << ": " << v->getSalario() << endl;
    cout << "Salario de " << z->getNome() << " " << z->getSobrenome() << ": " << z->getSalario() << endl;
}