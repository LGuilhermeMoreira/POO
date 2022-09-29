#include "Tempo.h"
#include <iostream>
using namespace std;

int main()
{
   Tempo *hr1 = new Tempo(6,6,6);
   Tempo *hr2 = new Tempo(3,3,3);
   Tempo *hr3 = new Tempo(*hr1+*hr2);
   Tempo *hr4 = new Tempo(*hr1-*hr2);

   hr1->print();
   hr2->print();
   hr3->print();
   hr4->print();
}
