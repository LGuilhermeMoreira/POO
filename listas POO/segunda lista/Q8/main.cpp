#include "Estacionamento.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
   Tempo *hr_entrada = new Tempo[5]();
   Tempo *hr_saida = new Tempo[5]();
   
   Estacionamento *estado = new Estacionamento[5]();

   for(int i = 0; i < 5; i++){
      string placa,modelo;
      cout << "Placa[" << i+1 << "]: ";
      getline(cin, placa);
      cout << "Modelo" << i+1 << "]: ";
      getline(cin, modelo);

      estado[i].setplaca(placa);
      estado[i].setmodelo(modelo);

      int min1,min2,seg1,seg2,hr1,hr2;

      cout << "digite o horario de entrada" << endl;
      cin >> hr1 >> min1 >> seg1; 
      
      cout << "digite o horario de saida" << endl;
      cin >> hr2 >> min2 >> seg2;

      hr_entrada[i].sethr(hr1);
      hr_entrada[i].setmin(min1);
      hr_entrada[i].setseg(seg1);

      hr_saida[i].sethr(hr2);
      hr_saida[i].setmin(min2);
      hr_saida[i].setseg(seg2);

      cin.ignore();
   }

   for(int i = 0; i < 5; i++){
      Tempo aux(hr_saida[i] - hr_entrada[i]);
      estado[i].print(aux);
   }

}
