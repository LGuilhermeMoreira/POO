#include <iostream>
#include <string>
#include "Estudante.h"
using namespace std;

Estudante::Estudante(){

};

void Estudante::setnome(string nome)
{
    this->nome = nome;
}

void Estudante::setmatricula(string matricula)
{
    this->matricula = matricula;
}

void Estudante::setcurso(string curso)
{
    this->curso = curso;
}

string Estudante::getnome()
{
    return nome;
}

string Estudante::getmatricula()
{
    return matricula;
}

string Estudante::getcurso()
{
    return curso;
}