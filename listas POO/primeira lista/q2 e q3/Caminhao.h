#include"CarroPasseio.h"
#include<iostream>
using namespace std;

class Caminhao : public Motor,Veiculo{
    private:
        float altura;
        float tonelada;
        float comprimento;
    public:
        //gets
        float getaltura();
        float gettonelada();
        float getcomprimento();
        //sets
        void setaltura(float altura);
        void settonelada(float tonelada);
        void setcomprimento(float comprimento);
        //construtores
        Caminhao(float peso, float velmax, float preco, int num_cilindros, float potencia, float altura,float tonelada,float comprimento);
        //metodos
        void print_caminhao();
};