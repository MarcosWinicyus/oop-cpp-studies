#ifndef COELHO_H
#define COELHO_H
#include "animal.h"
#include <string>
#include <iostream>
using namespace std;

class Coelho : public Animal {
    private:
        int cenouras_dia;
        bool pelo_longo;

    public:
        Coelho();
        int get_cenouras_dia();
        bool get_pelo_longo();

        void set_cenouras_dia(const int &);
        void set_pelo_longo(const bool &);

};
#endif