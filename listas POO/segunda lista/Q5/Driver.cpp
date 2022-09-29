#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
    Data *j = new Data(19, 6, 2004);
    j->printdata();
    j->numdias(9);
    j->numdias("novembro");
}