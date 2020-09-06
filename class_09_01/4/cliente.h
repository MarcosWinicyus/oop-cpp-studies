#ifndef CLIENTE_H
#define CLIENTE_H
#include "pessoa.h"
#include <string>
#include <iostream>
using namespace std;

class Cliente : public Pessoa {
    private:
        double plafond;
        double valor_divida;

    public:
        Cliente();
        double obter_saldo();

        double get_plafond();
        double get_valor_divida();

        void set_plafond(const double &);
        void set_valor_divida(const double &);

};
#endif