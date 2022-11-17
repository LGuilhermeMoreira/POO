#include <iostream>
#include <stdexcept>
using namespace std;

class Dividebyexeption: public runtime_error{
public:
    Dividebyexeption(): runtime_error("tentou dividir por 0"){}
};

double quotient(int numerador, int denominador){
    if(denominador == 0){
        throw Dividebyexeption ();
    }

    return static_cast<double> (numerador) / denominador;
}

int main(){
    while(true){
        try{
            int a,b;
            cout << "digite os valor de numeroador e denominador respectivamente" << endl;
            cin >> a;
            cin >> b;
            cin.ignore();
            cout << quotient(a,b) << endl;
            break;
        }catch(Dividebyexeption &a){
            cout << "Erro: ";
            a.what();
             cout << "digite os valor de numeroador e denominador respectivamente de novo" << endl;
        }
    }
}