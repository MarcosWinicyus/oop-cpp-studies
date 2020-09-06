#ifndef MATRICIAL_H
#define MATRICIAL_H
#include "impressora.h"

class Matricial : public Impressora{
    public:
        Matricial();
        string get_num_agulhas();
        void set_num_agulhas(const string &);
        bool get_imprime_vias();
        void set_imprime_vias(const bool &);
        
    private:
        string num_agulhas;
        bool imprime_vias;

};
#endif