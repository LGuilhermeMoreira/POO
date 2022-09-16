#include <iostream>
#include <string>
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
    void SetNomeDestinatario(string nomeDestinatario)
    {
        this->nomeDestinatario = nomeDestinatario;
    }

    void SetEnderecoDestinatario(string enderecoDestinatario)
    {
        this->enderecoDestinatario = enderecoDestinatario;
    }

    void SetCidadeDestinatario(string cidadeDestinatario)
    {
        this->cidadeDestinatario = cidadeDestinatario;
    }

    void SetEstadoDestinatario(string estadoDestinatario)
    {
        this->estadoDestinatario = estadoDestinatario;
    }

    void SetCepDestinatario(string cepDestinatario)
    {
        this->cepDestinatario = cepDestinatario;
    }

    void SetNomeRemetente(string nomeRemetente)
    {
        this->nomeRemetente = nomeRemetente;
    }

    void SetEnderecoRemetente(string enderecoRemetente)
    {
        this->enderecoRemetente = enderecoRemetente;
    }

    void SetCidadeRemetente(string cidadeRemetente)
    {
        this->cidadeRemetente = cidadeRemetente;
    }

    void SetEstadoRemetente(string estadoRemetente)
    {
        this->estadoRemetente = estadoRemetente;
    }

    void SetCepRemetente(string cepRemetente)
    {
        this->cepRemetente = cepRemetente;
    }

    void SetPeso(double peso)
    {
        this->peso = peso;
    }

    void SetPrecoKG(double precoKG)
    {
        this->precoKG = precoKG;
    }
    // construtores
    Pacote(string, string, string, string, string, string, string, string, string, string, double, double);
    // metodos
    double CalculaCusto();
};