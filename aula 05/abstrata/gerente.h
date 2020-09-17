#ifndef GERENTE_H
#define GERENTE_H
#include "funcionario.h"
class Gerente:public Funcionario{
    private:
        string empresa;
    public:
        void set_empresa(const string & );
        string get_empresa(); 
        double get_bonificacao();
};
#endif