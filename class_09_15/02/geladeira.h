#ifndef GELADEIRA_H
#define GELADEIRA_H
#include "leite.h"
#include "carne.h"

class Geladeira:public Carne, public Leite{
    private:
        string modelo;
        int capacidade_litros;

        void set_modelo(const string &);
        void set_capacidade_litros(const int &);

        string get_modelo();
        int get_capacidade_litros();
        
};
#endif