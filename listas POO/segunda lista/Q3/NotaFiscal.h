#ifndef NOTAFISCAL_H
#define NOTAFISCAL_H

class Notafiscal{
private:
    std::string numero_peca;
    std::string descricao;
    int quantidade_comprada;
    double preco;
public:
    // construtor
    Notafiscal(std::string numero_peca, std::string descricao, int quantidade_comprada, double preco);
    Notafiscal() = default;
    // sets
    void setNumero_peca(std::string numero_peca);
    void setDescricao(std::string descricao);
    void setQuantidade_comprada(int quantidade_comprada);
    void setPreco(double preco);
    // gets
    std::string getNumero_peca();
    std::string getDescricao();
    int getQuantidade_comprada();
    double getPreco();
    void getSomatotal(Notafiscal *a,int b);
    int get_Total(int b);
};

#endif
