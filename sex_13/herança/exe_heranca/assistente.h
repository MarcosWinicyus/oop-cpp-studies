#ifndef ASSISTENTE_H
#define ASSISTENTE_H
#include "funcionario.h"

class Assistente : public Funcionario{
    private:
        string matricula;

    public:
        Assistente();
            string get_matricula();
            void set_matricula(const string &);
            void exibir_dados();

};

#endif