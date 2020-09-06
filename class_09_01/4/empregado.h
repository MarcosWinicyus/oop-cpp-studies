#ifndef EMPREGADO_H
#define EMPREGADO_H
#include "pessoa.h"
#include <string>
#include <iostream>
using namespace std;

class Empregado : public Pessoa {
    private:
        int num_sessao;
        double salario_base;
        double irs;
        double salario;

    public:
        Empregado();
        
        int get_num_sessao();
        double get_salario_base();
        double get_irs();
        double get_salario();

        void set_num_sessao(const int &);
        void set_salario_base(const double &);
        void set_irs(const double &);
        void calcular_salario();

};
#endif