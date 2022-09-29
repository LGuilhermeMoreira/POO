#ifndef ALUNO_INCLUDED
#define ALUNO_INCLUDED

class Aluno{
private:
    int serie,grau;
    std::string nome;
public:
    //sets
    void setnome(std::string);
    void setgrau(int);
    void setserie(int);
    //gets
    std::string getnome();
    int getgrau();
    int getserie();
    //construtor && destrutor;
    Aluno(std::string,int,int);
    ~Aluno();
    Aluno() = default;
};

#endif