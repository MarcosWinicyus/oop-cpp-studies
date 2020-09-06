#ifndef FORNECEDOR_H
#define FORNECEDOR_H
#include "pessoa.h"
#include <string>
#include <iostream>
using namespace std;

class Fornecedor : public Pessoa {
    private:
        double plafond;
        double valor_divida;

    public:
        Fornecedor();
        double obter_saldo();

        double get_plafond();
        double get_valor_divida();

        void set_plafond(const double &);
        void set_valor_divida(const double &);

};
#endif