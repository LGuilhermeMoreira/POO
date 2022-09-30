#include"Complex.h"
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    Complex t1(1.0, 2.0);
    Complex t2(3.0, 4.0);
    Complex t3(t1+t2);
    t1.print();
    t2.print();
    t3.print();
}