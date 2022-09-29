#include<iostream>
#include"Inseto.h"
#include"Humano.h"

class SuperHeroi: public Humano,public Inceto{
private:
    std::string codenome,trauma,poderes;
public:
    // gets
    std::string getcodinome();    
    std::string gettrauma();
    std::string getpoderes();
    // sets
    void setcodinome(std::string codenome);
    void settrauma(std::string trauma);
    void setpoderes(std::string  poderes);
    // constructor
    SuperHeroi(std::string, std::string, std::string, std::string, std::string, std::string, std::string,bool,bool,bool,char,int);
    // metodos
    void print();
};

