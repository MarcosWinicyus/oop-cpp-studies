#ifndef EMPRESARIO_H
#define EMPRESARIO_H
#include "pessoa.h"
class Empresario : public Pessoa{
    private:
        double investimento_inicial;
    public:
        Empresario(Endereco *endereco);
        void set_investimento(const double &);
        double get_investimento();
};
#endif