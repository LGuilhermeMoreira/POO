#ifndef GRANDBOOK_INCLUDED
#define GRANDBOOK_INCLUDED
#include<iostream>
#include<string>

class Grandebook{
    private:
        std::string courseName;
        std::string professorName;
    public:
        // constructor
        Grandebook(std::string,std::string);
        // gets
        std::string getcourseName();
        std::string getprofessorName();
        // sets
        void setcourseName(std::string);
        void setprofessorName(std::string);
        // metodos
        void displayMessage();

};

#endif