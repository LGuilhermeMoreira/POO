#include<iostream>
#include"NotaFiscal.h"
using namespace std;

int main(){
    int tamanho;
    cout << "digite o tamanho do vetor: ";
    cin >> tamanho;
    cin.ignore();

    Notafiscal *a = new Notafiscal[tamanho]();

    for(int i  = 0; i < tamanho; i++){
        string numero_peca;
        string descricao;
        int quantidade_comprada;
        double preco;

        cout << "digite o numero da peca: ";
        getline(cin,numero_peca);
        cout << "digite a descricao: ";
        getline(cin,descricao);
        cout << "digite a quantidade comprada: ";
        cin >> quantidade_comprada;
        cout << "digite o preco: ";
        cin >> preco;
        cin.ignore();

        a[i].setNumero_peca(numero_peca);
        a[i].setDescricao(descricao);
        a[i].setQuantidade_comprada(quantidade_comprada);
        a[i].setPreco(preco);
    }

    
    a[0].getSomatotal(a,tamanho);

    cout << "Tamanho do vetor: " << a->get_Total(tamanho) << endl;
}