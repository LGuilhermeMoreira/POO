#include<iostream>
#include"NotaFiscal.h"

Notafiscal::Notafiscal(std::string numero_peca, std::string descricao, int quantidade_comprada, double preco){
    this->numero_peca = numero_peca;
    this->descricao = descricao;
    this->quantidade_comprada = quantidade_comprada;
    this->preco = preco;
}

void Notafiscal::setNumero_peca(std::string numero_peca){
    this->numero_peca = numero_peca;
}

void Notafiscal::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Notafiscal::setQuantidade_comprada(int quantidade_comprada){
    this->quantidade_comprada = quantidade_comprada;
}

void Notafiscal::setPreco(double preco){
    this->preco = preco;
}

std::string Notafiscal::getNumero_peca(){
    return this->numero_peca;
}

std::string Notafiscal::getDescricao(){
    return this->descricao;
}

int Notafiscal::getQuantidade_comprada(){
    return this->quantidade_comprada;
}

double Notafiscal::getPreco(){
    return this->preco;
}

void Notafiscal::getSomatotal(Notafiscal *a,int b){
    int resp1 = 0;
    double resp2 = 0;
    for(int i = 0; i < b; i++){
        resp1 += a[i].getQuantidade_comprada();
        resp2 += a[i].getPreco();
    }

    std::cout << "quantidade comprada no final = " << resp1 << std::endl;
    std::cout << "preco total = " << resp2 << std::endl;
}

int Notafiscal::get_Total(int b){
    return b;
}