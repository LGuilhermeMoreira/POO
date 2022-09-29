#include <iostream>
#include "NumeroInteiro.h"
using namespace std;

int main()
{
    NumeroInteiro f1(1, 2);
    NumeroInteiro f2(2, 4);
    NumeroInteiro test1(f1 + f2);
    NumeroInteiro test2(f1 - f2);
    NumeroInteiro test3(f1 * f2);
    NumeroInteiro test4(f1 / f2);

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