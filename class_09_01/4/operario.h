#ifndef OPERARIO_H
#define OPERARIO_H
#include "empregado.h"
#include <string>
#include <iostream>
using namespace std;

class Operario : public Empregado {
    private:
        double valor_producao;
        double comicao;
        double salario;

    public:
        Operario();
        void calcular_salario();

        double get_valor_producao();
        double get_comicao();
        double get_salario();
        
        void set_valor_producao(const double &);
        void set_comicao(const double &);

};
#endif