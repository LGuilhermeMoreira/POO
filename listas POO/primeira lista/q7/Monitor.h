#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Estudante.h"
using namespace std;

class Monitor : public Funcionario, Estudante
{
private:
    string disciplina;
    int cargahoraria;

public:
    string getdisciplina();
    void setdisciplina(string);
    int getcargahoraria();
    void setcargahoraria(int);
    Monitor();

    void print();
};