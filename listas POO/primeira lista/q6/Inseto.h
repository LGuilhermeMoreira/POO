#include<iostream>

class Inceto{
    private:
        std::string nome;
        bool venenoso;
        bool alado;
        bool ferrao;
    public:
        // gets
        std::string getnome();
        bool getvenenoso();
        bool getalado();
        bool getferrao();
        // sets
        void setnome(std::string);
        void setvenenoso(bool);
        void setalado(bool);
        void setferrao(bool);
};

