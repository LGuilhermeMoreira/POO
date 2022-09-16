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