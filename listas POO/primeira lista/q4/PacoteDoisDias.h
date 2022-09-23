#include <iostream>
#include <string>
#include "PacoteOvernight.h"
using namespace std;

class PacoteDoisDias : public PacoteOverNight{
    public:
        // constructor
        PacoteDoisDias(string, string, string, string, string, string, string, string, string, string, float, float, float);
        // set
            void settaxaadicional(double);
        // get
            double gettaxaadicional();
        // metodos
            double CalculaCusto();
};