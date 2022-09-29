#include<iostream>
#include"Aluno.h"
#include<string>
using namespace std;

int controlador(){
    static int num = 1;
    return num++;
}

int main(){
    Aluno *aluno = new Aluno[15]();
    for(int i = 0; i < 15; i++){
        int a,b;
        string l;
        cout << "Nome[" << i+1 << "]: ";
        getline(cin,l);
        cout << "Serie[" << i + 1 << "]: ";
        cin >> a;
        cout << "Grau[" << i + 1 << "]: ";
        cin >> b;
         
        aluno[i].setnome(l);
        aluno[i].setserie(a);
        aluno[i].setgrau(b);
        cin.ignore();        
    }

    for(int i = 0; i < 15; i++){
        cout << aluno[i].getnome() << endl;
        cout << aluno[i].getgrau() << endl;
        cout << aluno[i].getserie() << endl;
        cout << "controlador: " << controlador() << endl;
    }

}