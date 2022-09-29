#include<iostream>
#include"Fracao.h"
using namespace std;

int main(){
    Fracao f1(1,2);
    Fracao f2(2,4);
    Fracao test1(f1+f2);
    Fracao test2(f1 - f2);
    Fracao test3(f1 * f2);
    Fracao test4(f1 / f2);

    f1.print();
    cout << endl;
    f2.print();
    cout << endl;
    test1.print();
    cout << endl;
    test2.print();
    cout << endl;
    test3.print();
    cout << endl;
    test4.print();
    cout << endl;
}