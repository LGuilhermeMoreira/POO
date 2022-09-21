#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
private:
    string nome;
    float salario;
    string turno, RG;

public:
    Funcionario();
    string getnome();
    float getsalario();
    string getturno();
    string getRG();
    void setnome(string nome);
    void setsalario(float salario);
    void setturno(string turno);
    void setRG(string RG);
};