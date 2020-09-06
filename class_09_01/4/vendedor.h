#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <string>
#include "carro.h"
#include "empregado.h"
using namespace std;

class Vendedor : public Empregado{
    private:
        double valor_venda;
        double comicao;
        double salario;
        Carro* carro; // composição

    public:
        Vendedor(Carro *carro);
        void calcular_salario();

        double get_valor_venda();
        double get_comicao();
        double get_salario();
        Carro* get_carro();
        
        void set_carro(Carro *carro);
        void set_valor_venda(const double &);
        void set_comicao(const double &);
        
};
#endif