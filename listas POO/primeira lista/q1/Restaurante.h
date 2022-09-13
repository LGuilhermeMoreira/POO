#include<iostream>
#include"Empresa.h"
using namespace std;

class Restaurante : public Empresa{
    public:
        // construtores 
        //Restaurante();
        Restaurante(string nome,string endereco,string cidade,string estado,string cep, string telefone,string tipo, float preco);
        // gets
        string gettipo();
        float getpreco();
        // sets
        void settipo(string);
        void setpreco(float);
        // metodos
        void printa();
    private:
        string tipo;
        float preco;
};