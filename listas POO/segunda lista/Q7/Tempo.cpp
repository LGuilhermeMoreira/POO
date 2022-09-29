#include<iostream>
#include"Tempo.h"
using namespace std;

//gets
int Tempo::getmin(){
    return min;
}

int Tempo::gethr(){
    return hr;
}

int Tempo::getseg(){
    return seg;
}

// sets
void Tempo::setmin(int a){
    this->min = a;
}

void Tempo::sethr(int a){
    this->hr = a;
}

void Tempo::setseg(int a){
    this->seg = a;
}

// contrutor
Tempo::Tempo(int seg, int min, int hr){
    for (; seg >= 60;)
    {
        seg -= 60;
        min++;
    }

    for (; min >= 60;)
    {
        min -= 60;
        hr++;
    }

    if(hr >= 24)
        hr = 0;

    setmin(min);
    setseg(seg);
    sethr(hr);
}

// metodos
void Tempo::print(){
    cout << "horario atual: " << getseg() << ":" << getmin() << ":" << gethr() << endl;
}

Tempo Tempo::operator-(Tempo &aux){ // (p1-p2)  divisor de aguas, oq da a esquerda é p1 e direita p2  
    Tempo x;
    x.hr = this->hr - aux.hr;
    x.seg = this->seg - aux.seg;
    x.min = this->min - aux.min;
    return x;
}

Tempo Tempo::operator+(Tempo &aux){
    Tempo x;
    x.hr = this->hr + aux.hr;
    x.seg = this->seg + aux.seg;
    x.min = this->min + aux.min;
    return x;
}