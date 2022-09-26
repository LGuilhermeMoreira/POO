
#include<iostream>

class Humano{
    private:
        std::string nome,lingua,etinia;
        char sexo;
        int idade;
    public:
        //gets
        std::string getnome();
        std::string getlingua();
        std::string getetinia();
        char getsexo();
        int getidade();
        //sets
        void setnome(std::string);
        void setlingua(std::string);
        void setetinia(std::string);
        void setsexo(char);
        void setidade(int);
};

