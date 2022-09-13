#include<iostream>
using namespace std;

class Empresa{
    public:
        // construtores e destrutor
        ~Empresa();
        Empresa();
        Empresa(string nome,string endereco,string cidade,string estado,string cep, string telefone);
        // metodos
        void print();
        // gets
        string getnome();
        string getendereco();
        string getcidade();
        string getestado();
        string getcep();
        string gettelefone();
        // sets
        void setnome(string);
        void setendereco(string);
        void setcidade(string);
        void setestado(string);
        void setcep(string);
        void settelefone(string);
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
};

