#ifndef CACHORRO_H
#define CACHORRO_H
#include "animal.h"
#include <string>
#include <iostream>
using namespace std;

class Cachorro : public Animal {
    private:
        double distancia_faro;
        double intencidade_latido;

    public:
        Cachorro();
        double get_distancia_faro();
        double get_intencidade_latido();

        void set_distancia_faro(const double &);
        void set_intencidade_latido(const double &);

};
#endif