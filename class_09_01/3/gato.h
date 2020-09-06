#ifndef GATO_H
#define GATO_H
#include "animal.h"
#include <string>
#include <iostream>
using namespace std;

class Gato : public Animal {
    private:
        double altura_pulo;
        bool pelo_longo;

    public:
        Gato();
        double get_altura_pulo();
        bool get_pelo_longo();

        void set_altura_pulo(const double &);
        void set_pelo_longo(const bool &);

};
#endif