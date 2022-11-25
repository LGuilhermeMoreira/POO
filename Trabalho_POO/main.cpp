#include "Functions.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
// crud -> create read update delete
int main(){
    vector<CD> cds;
    vector<DVD> dvds;
    do{
        cout << "1 - Cadastrar CD" << endl;
        cout << "2 - Cadastrar DVD" << endl;
        cout << "3 - Deletar CD ou DVD" << endl;
        cout << "4 - Pesquisar por compositor" << endl;
        cout << "5 - Pesquisar por data de lancamento" << endl;
        cout << "6 - Pesquisar por titulo" << endl;
        cout << "7 - Pesquisar por genero" << endl;
        cout << "8 - Mostrar todas as keywords" << endl;
        cout << "9 - Mostrar todas as midias" << endl;
        cout << "0 - Sair" << endl;
        int opcao;
        cout << endl << "Comando: ";
        cin >> opcao;
        cin.ignore();
        if(opcao == 1){
            system("cls || clear");
            CD a;
            cadastra_cd(a);
            cds.push_back(a);
            system("cls || clear");
        }
        else if(opcao == 2){
            system("cls || clear");
            DVD a;
            cadastra_dvd(a);
            dvds.push_back(a);
            system("cls || clear");
        }
        else if(opcao == 4){
            system("cls || clear");
            pesquisa_por_compositor(cds, dvds);
        }
        else if(opcao == 3){
            system("cls || clear");
            delete_one(cds, dvds);
            system("cls || clear");
        }
        else if(opcao == 5){
            system("cls || clear");
            pesquisa_por_data(cds, dvds);
        }
        else if(opcao == 6){
            system("cls || clear");
            pesquisa_titulo(cds,dvds);
        }
        else if(opcao == 7){
            system("cls || clear");
            pesquisa_por_genero(cds, dvds);
        }
        else if(opcao == 8){
            system("cls||clear");
            show_keywords(cds,dvds);
        }
        else if(opcao == 9){
            system("cls || clear");
            show(cds,dvds);
        }
        else if(opcao == 0){
            break;
        }
    }while(true);
}
