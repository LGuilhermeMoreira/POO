#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado{
private:
    std::string nome;
    std::string sobrenome;
    float salario;
public:
    //construtores
    Empregado(std::string nome, std::string sobrenome, float salario);
    Empregado() = default;
    // sets
    void setNome(std::string nome);
    void setSobrenome(std::string sobrenome);
    void setSalario(float salario);
    // gets
    std::string getNome();
    std::string getSobrenome();
    float getSalario();
};


#endif