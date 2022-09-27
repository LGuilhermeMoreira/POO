#include <iostream>
#include <string>
#include "GrandeBook.h"
using namespace std;

int main(){
    string p = "Thigas";
    string c = "POO";

    Grandebook *ufc = new Grandebook(c,p);

    ufc->displayMessage();
}