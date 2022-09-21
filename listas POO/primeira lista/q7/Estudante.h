#include <iostream>
#include <string>
using namespace std;

class Estudante
{
private:
    string nome;
    string matricula;
    string curso;

public:
    Estudante();
    void setnome(string);
    void setmatricula(string);
    void setcurso(string);
    string getnome();
    string getmatricula();
    string getcurso();
};