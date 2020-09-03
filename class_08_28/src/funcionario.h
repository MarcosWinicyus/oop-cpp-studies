#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"
class Funcionario : public Pessoa{
    private:
        double salario;
    public:
        Funcionario(const Endereco &);
        void set_salario(const double &);
        double get_salario();
};
#endif