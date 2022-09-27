#include <iostream>
#include <string>
#include "GrandeBook.h"

Grandebook::Grandebook(std::string c, std::string p){
    setcourseName(c);
    setprofessorName(p);
}

void Grandebook::setcourseName(std::string c){
    this->courseName = c;
}

void Grandebook::setprofessorName(std::string p){
    this->professorName = p;
}

std::string Grandebook::getcourseName(){
    return this->courseName;
}

std::string Grandebook::getprofessorName(){
    return this->professorName;
}

void Grandebook::displayMessage(){
    std::cout << "Course Name: " << getcourseName() << std::endl;
    std::cout << "Professor Name: " << getprofessorName() << std::endl;
}