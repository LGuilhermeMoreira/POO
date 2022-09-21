#include<iostream>
#include<string>
#include"VeiculoAnfibio.h"
using namespace std;

void ler_objeto(VeiculoAnfibio* obj){
    int num_rodas;
    string cor;
    float velocidade,peso, altura, valor, vel_ter, vel_aqua, tamanho;

    cout << "digite o numero de rodas: ";
    cin >> num_rodas;
    cin.ignore();

    cout << "digite a cor: ";
    getline(cin,cor);

    cout << "velocidade: ";
    cin >> velocidade;

    cout << "peso: ";
    cin >> peso;

    cout << "altura: ";
    cin >> altura;

    cout << "valor: ";
    cin >> valor;

    cout << "velocidade na terra: ";
    cin >> vel_ter;

    cout << "velocidade na agua: ";
    cin >> vel_aqua;

    cout << "tamanho: ";
    cin >> tamanho;

    obj->setPeso(peso);
    obj->setAltura(altura);
    obj->setValor(valor);
    obj->setCort(cor);
    obj->setCora(cor);
    obj->setNum_rodas(num_rodas);
    obj->setNum_rodasx(num_rodas);
    obj->setTamanho(tamanho);
    obj->setValor(valor);
    obj->setVela(velocidade);
    obj->setVelt(velocidade);
    obj->setVel_aqua(vel_aqua);
    obj->setVel_ter(vel_ter);
}

int main(){
    VeiculoAnfibio* anfibio = new VeiculoAnfibio();
    ler_objeto(anfibio);
    anfibio->print();
}