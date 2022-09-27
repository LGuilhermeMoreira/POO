#include <iostream>
#include "Conta.h"
using namespace std;

int main()
{
    double a;

    cout << "INICIANDO O OBJETO BRADESCO" << endl;
    cout << "digite o valor do saldo no bradesco: ";
    cin >> a;

    Conta *bradesco = new Conta(a);

    cout << "valor atual: " << bradesco->getsaldo() << endl;
    bradesco->Credito();
    cout << "valor apos credito: " << bradesco->getsaldo() << endl;
    bradesco->Debito();
    cout << "valor apos debito: " << bradesco->getsaldo() << endl
         << endl;

    cout << "INICIANDO O OBJETO ITAU" << endl;
    Conta *itau = new Conta(-1);

    cout << "valor atual: " << itau->getsaldo() << endl;
    itau->Credito();
    cout << "valor apos credito: " << itau->getsaldo() << endl;
    itau->Debito();
    cout << "valor apos debito: " << itau->getsaldo() << endl
         << endl;
}