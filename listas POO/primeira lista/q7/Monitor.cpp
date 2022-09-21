#include"Monitor.h"
#include<iostream>
#include<string>
using namespace std;

Monitor::Monitor(){

}

void Monitor::setcargahoraria(int cargahoraria){
    this->cargahoraria = cargahoraria;
}

int Monitor::getcargahoraria(){
    return cargahoraria;
}

void Monitor::setdisciplina(string disciplina){
    this->disciplina = disciplina;
}

string Monitor::getdisciplina(){
    return disciplina;
}

void Monitor::print(){
    cout << "Estudante/Funcionario" << endl << endl;
    cout << "nome: " << Funcionario::getnome() << endl << "ou" << endl << "nome: " << Estudante::getnome() << endl;
    cout << "matricula: " << Estudante::getmatricula() << endl;
    cout << "Curso: " << Estudante::getcurso() << endl;
    cout << "turno: " << Funcionario::getturno() << endl;
    cout << "carga horaria: " << getcargahoraria() << endl;
    cout << "disciplina: " << getdisciplina() << endl;
    cout << "salario: " << Funcionario::getsalario() << endl;
    cout << "RG: " << Funcionario::getRG() << endl;
}