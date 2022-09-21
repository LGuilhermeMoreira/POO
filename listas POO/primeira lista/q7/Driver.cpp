#include <iostream>
#include <string>
#include "Monitor.h"
using namespace std;

void ler(Monitor* a){
    string apelido,matricula,curso,nome,turno,rg,disciplina;
    float salario;
    int cargahoraria;

    cout << "digite seu apelido: ";
    getline(cin,apelido);
    cout << "digite sua matricula: ";
    getline(cin,matricula);
    cout << "digite seu curso: ";
    getline(cin,curso);
    cout << "digite seu nome: ";
    getline(cin,nome);
    cout << "digite seu turno: ";
    getline(cin,turno);
    cout << "digite seu rg: ";
    getline(cin,rg);
    cout << "digite seu disciplina: ";
    getline(cin,disciplina);

    cout << "digite seu salario: ";
    cin >> salario;
    cout << "digite sua carga horaria: ";
    cin >> cargahoraria;
    cin.ignore();

    a->Estudante::setnome(apelido);
    a->setmatricula(matricula);
    a->setcurso(curso);
    a->Funcionario::setnome(nome);
    a->setturno(turno);
    a->setdisciplina(disciplina);
    a->setsalario(salario);
    a->setcargahoraria(cargahoraria);
    a->setRG(rg);
}

int main()
{
    Monitor *mario = new Monitor();
    ler(mario);
    mario->print();
}