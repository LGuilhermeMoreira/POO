#ifndef TEMPO_INCLUDED
#define TEMPO_INCLUDED

class Tempo{
private:
    int min;
    int hr;
    int seg;
public:
    //gets
    int getmin();
    int gethr();
    int getseg();
    //sets
    void setmin(int);
    void sethr(int);
    void setseg(int);
    //construcores
    Tempo() = default;
    Tempo(int,int,int);
    //metodos
    void print();
    Tempo operator-(Tempo &aux);
    Tempo operator+(Tempo &aux);
    Tempo somar(Tempo &a, Tempo &b);
    Tempo subtrair(Tempo &a, Tempo &b);
};

#endif