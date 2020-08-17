#ifndef TECNICO_H
#define TECNICO_H
#include "assistente.h"

class Tecnico : public Assistente{
    private:
        float bonus;
    public:
    Tecnico();
        float get_bonus();
        void set_bonus(const float &);

        float ganho_anual();
        void exibir_dados();
};
#endif