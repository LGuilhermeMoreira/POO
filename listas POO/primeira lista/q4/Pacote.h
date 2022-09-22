#include <iostream>
#include <string>
#pragma once
using namespace std;

class Pacote
{
private:
    string nomeDestinatario;
    string enderecoDestinatario;
    string cidadeDestinatario;
    string estadoDestinatario;
    string cepDestinatario;
    string nomeRemetente;
    string enderecoRemetente;
    string cidadeRemetente;
    string estadoRemetente;
    string cepRemetente;
    double peso;
    double precoKG;

public:
    // sets
    void SetNomeDestinatario(string nomeDestinatario);
    void SetEnderecoDestinatario(string enderecoDestinatario);
    void SetCidadeDestinatario(string cidadeDestinatario);
    void SetEstadoDestinatario(string estadoDestinatario);
    void SetCepDestinatario(string cepDestinatario);
    void SetNomeRemetente(string nomeRemetente);
    void SetEnderecoRemetente(string enderecoRemetente);
    void SetCidadeRemetente(string cidadeRemetente);
    void SetEstadoRemetente(string estadoRemetente);
    void SetCepRemetente(string cepRemetente);
    void SetPeso(double peso);
    void SetPrecoKG(double precoKG);
    // construtores
    Pacote(string, string, string, string, string, string, string, string, string, string, double, double);
    // metodos
    double CalculaCusto();
};