#ifndef LASER_H
#define LASER_H
#include "impressora.h"

class Laser : public Impressora{
    public:
        Laser();
        double get_capacidade_toner();
        void set_capacidade_toner(const double &);
        bool get_frente_verso();
        void set_frente_verso(const bool &);
        
    private:
        double capacidade_toner;
        bool frente_verso;

};
#endif