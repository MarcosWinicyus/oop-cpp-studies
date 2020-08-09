#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include "assistente.h"

class Administrativo : public Assistente{
    private:
        bool adiconal_noturno;
        float adiconal;

    public:
    Administrativo();
        bool get_adiconal_noturno();
        void set_adiconal_noturno(const bool &);

        float get_adiconal();
        void set_adiconal(const float &);

        float ganho_anual();
        void exibir_dados();
};
#endif