#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "CD.hpp"
#include "DVD.hpp"
using namespace std;

bool compara_cd(CD a, CD b){
    return a.getLancamento() <= b.getLancamento();
}

bool compara_dvd(DVD a, DVD b){
    return a.getLancamento() <= b.getLancamento();
}

void cadastra_dvd(DVD &a){
    vector<string> faixas;
    string type;
    int num;

    cout << "Digite o nome do artista: "; 
    getline(cin, type);
    a.setArtista(type);

    cout << "Digite o titulo: ";
    getline(cin, type);
    a.setTitulo(type);

    cout << "Digite o ano de lancamento: ";
    cin >> num;
    cin.ignore();
    a.setLancamento(num);

    cout << "Digite o genero: ";
    getline(cin, type);
    a.setGenero(type);

    cout << "Digite o numero de faixas: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome da faixa " << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setFaixas(faixas);
    faixas.clear();

    cout << "Digite o numero de keywords: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome da keyword" << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setKeywords(faixas);
    faixas.clear();

    cout << "Digite o numero de formatos de audio: ";
    cin >> num;
    cin.ignore();
    
    for(int i = 0; i < num; i++){
        cout << "Digite o nome do formato de audio " << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setFormatoAudio(faixas);
    faixas.clear();

    cout << "Digite o numero de formatos de tela: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome do formato de tela " << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setFormatoTela(faixas);
    faixas.clear();

    cout << "Digite o numero de legendas: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome da legenda " << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setLegendas(faixas);
    faixas.clear();

    //return a;
}

void cadastra_cd(CD &a){
    vector<string> faixas;
    string type;
    int num;

    cout << "Digite o nome do artista: ";
    getline(cin, type);
    a.setArtista(type);

    cout << "Digite o titulo: ";
    getline(cin, type);
    a.setTitulo(type);

    cout << "Digite o ano de lancamento: ";
    cin >> num;
    cin.ignore();
    a.setLancamento(num);

    cout << "Digite o genero: ";
    getline(cin, type);
    a.setGenero(type);

    cout << "Digite o numero de faixas: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome da faixa " << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setFaixas(faixas);
    faixas.clear();

    cout << "Digite o numero de keywords: ";
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        cout << "Digite o nome da keyword" << i+1 << ": ";
        getline(cin, type);
        faixas.push_back(type);
    }
    a.setKeywords(faixas);
    faixas.clear();

    float pre;
    bool amg;

    cout << "Digite o volume do CD: ";
    cin >> pre;
    a.setVolume(pre);

    cout << "Digite a duracao do CD: ";
    cin >> num;
    a.setDuracao(num);

    cout << "O CD pertence e alguma coletanea? (1 para sim, 0 para nao): ";
    cin >> num;
    if(num == 1)
        amg = true;
    else
        amg = false;
    a.setColetanea(amg);
    
    cin.ignore();
    //return a;
}

void show(vector<CD> &a, vector<DVD> &b){
    system("cls || clear");
    if(a.size() == 0 && b.size() == 0){
        cout << "Nao ha itens cadastrados" << endl << endl;
        return;
    }
    sort(a.begin(), a.end(), compara_cd);
    cout << "----------------------------------------" << endl;
    cout << "       CDs encontrados" << endl << endl;
    cout << "----------------------------------------" << endl;
    for(int i = 0; i < a.size(); i++){
        cout << "CD " << i+1 << endl << endl;
        cout << "Artista: " << a[i].getArtista() << endl;
        cout << "Titulo: " << a[i].getTitulo() << endl;
        cout << "Ano de lancamento: " << a[i].getLancamento() << endl;
        cout << "Genero: " << a[i].getGenero() << endl << endl;
        if(a[i].getFaixas().size() == 0)
            cout << "Nao ha faixas cadastradas" << endl;
        else{
            cout << "   ~Faixas~ " << endl;
            for(int j = 0; j < a[i].getFaixas().size(); j++){
                cout << "Faixa " << j+1  << ": " << a[i].getFaixas()[j] << endl;
            }
        }
        cout << endl;
        if(a[i].getKeywords().size() == 0)
            cout << "Nao ha keywords cadastradas" << endl;
        else{
            cout << "   ~Keywords~ " << endl;
            for(int j = 0; j < a[i].getKeywords().size(); j++){
                cout << "Keyword " << j+1 << ": " << a[i].getKeywords()[j] << endl;
            }
        }
        cout << endl;
        cout << "Volume: " << a[i].getVolume() << endl;
        cout << "Duracao: " << a[i].getDuracao() << endl;
        if(a[i].getColetanea() == true){
            cout << "Pertence a alguma coletanea" << endl;
        }else{
            cout << "Nao pertence a nenhuma coletanea" << endl;
        }
        cout << "----------------------------------------" << endl;
    }
    cout << endl;

    sort(b.begin(), b.end(), compara_dvd);
    cout << "       DVDs encontrados" << endl << endl;
    cout << "----------------------------------------" << endl;
    for(int i = 0; i < b.size(); i++){
        cout << "DVD " << i+1 << endl << endl;
        cout << "Artista: " << b[i].getArtista() << endl;
        cout << "Titulo: " << b[i].getTitulo() << endl;
        cout << "Ano de lancamento: " << b[i].getLancamento() << endl;
        cout << "Genero: " << b[i].getGenero() << endl;
        cout << endl;
        if(b[i].getFaixas().size() == 0)
            cout << "Nao ha faixas cadastradas" << endl;
        else{
            cout << "   ~Faixas~ " << endl;
            for(int j = 0; j < b[i].getFaixas().size(); j++){
                cout << "Faixa " << j+1  << ": " << b[i].getFaixas()[j] << endl;
            }
        }
        cout << endl;
        if(b[i].getKeywords().size() == 0)
            cout << "Nao ha keywords cadastradas" << endl;
        else{
            cout << "   ~Keywords~ " << endl;
            for(int j = 0; j < b[i].getKeywords().size(); j++){
                cout << "Keyword " << j+1 << ": " << b[i].getKeywords()[j] << endl;
            }
        }
        cout << endl;
        if(b[i].getLegendas().size() == 0)
            cout << "Nao ha legendas cadastradas" << endl;
        else{
            cout << "   ~Legendas~ " << endl;
            for(int j = 0; j < b[i].getLegendas().size(); j++){
                cout << "Legenda " << j+1 << ": " << b[i].getLegendas()[j] << endl;
            }
        }
        cout << endl;
        if(b[i].getFormatoAudio().size() == 0){
            cout << "Formato de audio nao definido" << endl;
        }else{
            cout << "   ~Formato de audio~ " << endl;
            for(int j = 0; j < b[i].getFormatoAudio().size(); j++){
                cout << "Formato de audio " << j+1 << ": " << b[i].getFormatoAudio()[j] << endl;
            }
        }
        cout << endl;
        if(b[i].getFormatoTela().size() == 0){
            cout << "Formato de tela nao definido" << endl;
        }else{
            cout << "   ~Formato de tela~ " << endl;
            for(int j = 0; j < b[i].getFormatoTela().size(); j++){
                cout << "Formato de audio " << j+1 << ": " << b[i].getFormatoTela()[j] << endl;
            }
        }
        cout << "----------------------------------------" << endl;
    }

    cout << endl << endl;
}

void pesquisa_por_compositor(vector<CD> &cds, vector<DVD> &dvds){
    string nome;
    vector<CD> cds_encontrados,aux_cd;
    vector<DVD> dvds_encontrados,aux_dvd;
    system("cls || clear");
    int cont = 0;
    cout << "Digite o nome do compositor: ";
    getline(cin, nome);
    cout << endl;
    for(int i = 0; i < cds.size(); i++){
        if(cds[i].getArtista() == nome){
            cds_encontrados.push_back(cds[i]);
            cont++;
        }
    }

    sort(cds_encontrados.begin(), cds_encontrados.end(), compara_cd);

    for(int i = 0; i < dvds.size(); i++){
        if(dvds[i].getArtista() == nome){
            dvds_encontrados.push_back(dvds[i]);
            cont++;
        }
    }

    sort(dvds_encontrados.begin(), dvds_encontrados.end(), compara_dvd);

    show(cds_encontrados, dvds_encontrados);
    //cout << endl;

    cout << "===============================" << endl;
}

void delete_one(vector<CD> &a, vector<DVD> &b){
    show(a,b);
    int opcao;
    cout << "Digite qual deseja excluir: " << endl
        << "1 - CD" << endl
        << "2 - DVD" << endl;
    cin >> opcao;
    cin.ignore();
    if(opcao == 1){
        int cd;
        cout << "Digite o numero do CD que deseja excluir: " << endl;
        cin >> cd;
        cin.ignore();
        a.erase(a.begin() + cd - 1);
    }else if(opcao == 2){
        int cd;
        cout << "Digite o numero do DVD que deseja excluir: " << endl;
        cin >> cd;
        cin.ignore();
        b.erase(b.begin() + cd - 1);
    }
}

bool compara_alfabeto_cd(CD a, CD b){
    return a.getTitulo() <= b.getTitulo();
}

bool compara_alfabeto_dvd(DVD a, DVD b){
    return a.getTitulo() <= b.getTitulo();
}

void pesquisa_por_data(vector<CD> &a, vector<DVD> &b){
    int ano;
    cout << "Digite o ano que deseja pesquisar: ";
    cin >> ano;
    cin.ignore();
    vector<CD> cds_encontrados;
    vector<DVD> dvds_encontrados;
    for(int i = 0; i < a.size(); i++){
        if(a[i].getLancamento() == ano){
            cds_encontrados.push_back(a[i]);
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i].getLancamento() == ano){
            dvds_encontrados.push_back(b[i]);
        }
    }

    sort(cds_encontrados.begin(), cds_encontrados.end(), compara_alfabeto_cd);

    cout << "       CDs encontrados" << endl << endl;
    //cout << "----------------------------------------" << endl;
    for(int i = 0; i < cds_encontrados.size(); i++){
        cout << "CD " << i+1 << ": " << cds_encontrados[i].getTitulo() << endl;
    }

    sort(dvds_encontrados.begin(), dvds_encontrados.end(), compara_alfabeto_dvd);
    cout << "----------------------------------------" << endl;
    cout << "       DVDs encontrados" << endl << endl;
    //cout << "----------------------------------------" << endl;
    for(int i = 0; i < dvds_encontrados.size(); i++){
        cout << "DVD " << i+1 << ": " << dvds_encontrados[i].getTitulo() << endl;
    }
    cout << "----------------------------------------" << endl;
}

void pesquisa_por_genero(vector<CD> &a, vector<DVD> &b){
    string genero;
    cout << "Digite o genero que deseja pesquisar: ";
    getline(cin, genero);
    vector<CD> cds_encontrados;
    vector<DVD> dvds_encontrados;
    for(int i = 0; i < a.size(); i++){
        if(a[i].getGenero() == genero){
            cds_encontrados.push_back(a[i]);
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i].getGenero() == genero){
            dvds_encontrados.push_back(b[i]);
        }
    }

    sort(cds_encontrados.begin(), cds_encontrados.end(), compara_alfabeto_cd);

    cout << "       CDs encontrados" << endl << endl;

    for(int i = 0; i < cds_encontrados.size(); i++){
        cout << "CD " << i+1 << ": " << cds_encontrados[i].getTitulo() << endl;
    }

    sort(dvds_encontrados.begin(), dvds_encontrados.end(), compara_alfabeto_dvd);

    cout << "       DVDs encontrados" << endl << endl;

    for(int i = 0; i < dvds_encontrados.size(); i++){
        cout << "DVD " << i+1 << ": " << dvds_encontrados[i].getTitulo() << endl;
    }
    cout << endl;
}



void pesquisa_titulo(vector<CD> &a, vector<DVD> &b){
    string artista, titulo_cd, titulo_dvd;
    vector<CD> encontrados_cd,aux_cd;
    vector<DVD> encontrados_dvd,aux_dvd;
    vector<string> found;
    cout << "Informe o artista: ";
    getline(cin,artista);

    for(int i = 0; i < a.size(); i++){
        if(a[i].getArtista() == artista){
            encontrados_cd.push_back(a[i]);
        }
    }

    for(int i = 0; i < b.size(); i++){
        if(b[i].getArtista() == artista){
            encontrados_dvd.push_back(b[i]);
        }
    }

    cout << "Informe o titulo do CD: ";
    getline(cin,titulo_cd);

    for(int i = 0; i < encontrados_cd.size(); i++){
        if(encontrados_cd[i].getTitulo() == titulo_cd){
            aux_cd.push_back(encontrados_cd[i]);
        }
    }

     cout << "Informe o titulo do DVD: ";
    getline(cin,titulo_dvd);

    for(int i = 0; i < encontrados_dvd.size(); i++){
        if(encontrados_dvd[i].getTitulo() == titulo_dvd){
            aux_dvd.push_back(encontrados_dvd[i]);
        }
    }

    for(int i = 0; i < aux_cd.size(); i++){
        for(int j =0; j < aux_dvd.size(); j++){
            for(int k = 0; k < aux_cd[i].getFaixas().size(); k++){
                string n = aux_cd[i].getFaixas()[k];
                for(int l = 0; l < aux_dvd[j].getFaixas().size(); l++){
                    string m = aux_dvd[j].getFaixas()[l];
                    if(n == m){
                        found.push_back(n);
                    }
                }
            }
        }
    }

    cout << "   ~Em comum~" << endl;
    for(int i =0; i < found.size(); i++){
        cout << "Faixa" << ": " << found[i] << endl;
    }
    cout << endl;

    cout << "   ~Diferentes~" << endl;
    for(int i = 0; i < aux_cd.size(); i++){
        for(int j = 0; j < aux_cd[i].getFaixas().size(); j++){
            int cont = 0;
            for(int k = 0; k < found.size(); k++){
                if(aux_cd[i].getFaixas()[j] != found[k]) cont++;
            }
            if(cont == found.size()){
                cout << "Faixa: " << aux_cd[i].getFaixas()[j] << endl;
            }
        }
    }
    for(int i = 0; i < aux_dvd.size(); i++){
        for(int j = 0; j < aux_dvd[i].getFaixas().size(); j++){
            int cont = 0;
            for(int k = 0; k < found.size(); k++){
                if(aux_dvd[i].getFaixas()[j] != found[k]) cont++;
            }
            if(cont == found.size()){
                cout << "Faixa: " << aux_dvd[i].getFaixas()[j] << endl;
            }
        }
    }
    cout << endl;
}

void show_keywords(vector<CD> &a, vector<DVD> &b){
    vector<string> mos;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].getKeywords().size();j++){
            mos.push_back(a[i].getKeywords()[j]);
        }
    }

    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < b[i].getKeywords().size();j++){
            mos.push_back(b[i].getKeywords()[j]);
        }
    }

    sort(mos.begin(),mos.end());

    cout << "   ~Keywords~" << endl << endl;
    cout << mos[0] << endl;

    for(int i = 1; i < mos.size(); i++){
        if(mos[i] != mos[i-1]) cout << mos[i] << endl;
    }
    cout << endl << endl;
}

#endif
