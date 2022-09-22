#include <iostream>
#include <string>
using namespace std;
#include"Pacote.h"

Pacote::Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario,string nomeRemetente,string enderecoRemetente,string cidadeRemetente, string estadoRemetente ,string cepRemetente,double peso,double precoKG){
    this->nomeDestinatario = nomeDestinatario;
    this->enderecoDestinatario = enderecoDestinatario;
    this->cidadeDestinatario = cidadeDestinatario;
    this->estadoDestinatario = estadoDestinatario;
    this->cepDestinatario = cepDestinatario;
    this->nomeRemetente = nomeRemetente;
    this->enderecoRemetente = enderecoRemetente;
    this->cidadeRemetente = cidadeRemetente;
    this->estadoRemetente = estadoRemetente;
    this->cepRemetente = cepRemetente;
    this->peso = peso;
    this->precoKG = precoKG;
};

double Pacote::CalculaCusto(){
    return (this->peso * this->precoKG);
}

void Pacote::Pacote::SetNomeDestinatario(string nomeDestinatario)
{
    this->nomeDestinatario = nomeDestinatario;
}

void Pacote::SetEnderecoDestinatario(string enderecoDestinatario)
{
    this->enderecoDestinatario = enderecoDestinatario;
}

void Pacote::SetCidadeDestinatario(string cidadeDestinatario)
{
    this->cidadeDestinatario = cidadeDestinatario;
}

void Pacote::SetEstadoDestinatario(string estadoDestinatario)
{
    this->estadoDestinatario = estadoDestinatario;
}

void Pacote::SetCepDestinatario(string cepDestinatario)
{
    this->cepDestinatario = cepDestinatario;
}

void Pacote::SetNomeRemetente(string nomeRemetente)
{
    this->nomeRemetente = nomeRemetente;
}

void Pacote::SetEnderecoRemetente(string enderecoRemetente)
{
    this->enderecoRemetente = enderecoRemetente;
}

void Pacote::SetCidadeRemetente(string cidadeRemetente)
{
    this->cidadeRemetente = cidadeRemetente;
}

void Pacote::SetEstadoRemetente(string estadoRemetente)
{
    this->estadoRemetente = estadoRemetente;
}

void Pacote::SetCepRemetente(string cepRemetente)
{
    this->cepRemetente = cepRemetente;
}

void Pacote::SetPeso(double peso)
{
    this->peso = peso;
}

void Pacote::SetPrecoKG(double precoKG)
{
    this->precoKG = precoKG;
}