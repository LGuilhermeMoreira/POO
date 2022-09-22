#include<iostream>
#include<cstdlib>
#include<string>
#include"Restaurante.h"
using namespace std;

int main(){
    string nome,endereco,cidade,estado,cep,telefone,tipo;
    float preco;
    
    cout << "nome: ";
    getline(std::cin, nome);
    
    cout << "endereco: ";
    getline(std::cin, endereco);
    
    cout << "cidade: ";
    getline(std::cin, cidade);
    
    cout << "estado: ";
    getline(std::cin, estado);
    
    cout << "cep: ";
    getline(std::cin, cep);
    
    cout << "telefone: ";
    getline(std::cin, telefone);
    
    cout << "tipo de comida: ";
    getline(std::cin, tipo);
    
    cout << "preco: ";
    cin >> preco;

    Restaurante *lora = new Restaurante(nome,endereco,cidade,estado,cep,telefone,tipo,preco);

    system("cls");

    cout << "-----------------------------------------" << endl;
    lora->print();
    cout << "-----------------------------------------" << endl;
}
