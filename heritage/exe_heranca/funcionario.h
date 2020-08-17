#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>
using namespace std;

class Funcionario{
    private:
        string nome;
        float salario;
    public:
    Funcionario();
        string get_nome();
        float get_salario();
        float ganho_anual();
        void set_nome(const string &);
        void set_salario(const float &);
        void add_aumento(const float &);
        void exibir_dados();
};
#endif