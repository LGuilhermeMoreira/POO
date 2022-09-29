#ifndef DATA_INCLUDED
#define DATA_INCLUDED
#include <iostream>

class Data
{
private:
    int ano, dia, mes;

public:
    // getter
    int getdia();
    int getano();
    int getmes();
    // setter
    void setdia(int);
    void setano(int);
    void setmes(int);
    // contructor
    Data(int, int, int);
    // metodos
    void printdata();
    void numdias(int);
    void numdias(std::string);
};

#endif