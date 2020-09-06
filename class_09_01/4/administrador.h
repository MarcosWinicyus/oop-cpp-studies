#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "empregado.h"
#include <string>
#include <iostream>
using namespace std;

class Administrador : public Empregado {
    private:
        double ajuda_custo;
        double salario;

    public:
        Administrador();
        void calcular_salario();

        double get_ajuda_custo();
        double get_salario();
        
        void set_ajuda_custo(const double &);


};
#endif