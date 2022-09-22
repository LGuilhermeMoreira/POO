#include<iostream>
#include<string>
#pragma once
#include"Pacote.h"
using namespace std;

class PacoteOverNight: public Pacote{
    private:
        double taxaadicional;
    public:
        // constructor
        PacoteOverNight(string,string,string,string,string,string,string,string,string,string,float,float,float);
        // gets
        double gettaxaadicional();
        // sets
        void settaxaadicional(double taxaadicional);
        // metodos
        double calculacusto();
};

