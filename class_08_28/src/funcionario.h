#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"
class Funcionario : public Pessoa{
    private:
        double salario;
    public:
        Funcionario(Endereco *endereco);
        void set_salario(const double &);
        double get_salario();
};
#endif