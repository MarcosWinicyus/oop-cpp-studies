#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "funcionario.h"
class Vendedor:public Funcionario{
    private:
        string empresa;
    public:
        void set_empresa(const string & );
        string get_empresa(); 
        double get_bonificacao();
};
#endif
