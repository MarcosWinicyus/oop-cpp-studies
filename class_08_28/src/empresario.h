#ifndef EMPRESARIO_H
#define EMPRESARIO_H
#include "pessoa.h"
class Empresario : public Pessoa{
    private:
        double investimento_inicial;
    public:
        Empresario(const Endereco &);
        void set_investimento(const double &);
        double get_investimento();
};
#endif