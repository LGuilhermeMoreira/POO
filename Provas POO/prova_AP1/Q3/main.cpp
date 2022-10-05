#include<iostream>
#include "Veiculoutilitario.h"
using namespace std;

int main(){
    float peso,potencia,carga;
    cout << "digite o peso, potencia e carga" << endl;
    cin >> peso >> potencia >> carga;
    cin.ignore();
    string nome;
    cout << "nome" << endl;
    cin >> nome;

    float volume_interno;
    cout << "volume interno" << endl;
    cin >> volume_interno;


    Veiculoutilitario v(potencia);
    v.setNome(nome);
    v.setPeso(peso);
    v.setPotencia(potencia);
    v.setCarga(carga);
    v.setVolumeInterno(volume_interno);

    v.print();
}