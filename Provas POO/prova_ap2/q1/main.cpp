#include "EmpregadoHorista.h"
#include "EmpregadoAssalariado.h"
#include <iostream>
using namespace std;

int main(){
    Empregado *empregados[2]{
        new EmpregadoAssalariado("THIGAS",1233.44),
        new EmpregadoHorista(8,500,"VILGAX")
    };
    

    for(int i = 0; i < 2; i++){
        empregados[i]->print();
        cout << endl;
    }

    for(int i = 0; i < 2; i++){
        delete empregados[i];
    }
}