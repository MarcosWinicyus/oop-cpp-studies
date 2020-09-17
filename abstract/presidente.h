#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include "funcionario.h"
class Presidente : public Funcionario{
    private:
        string pais;
    public:
        void set_pais(const string &);
        string get_pais();

        double get_bonificacao();
};
#endif