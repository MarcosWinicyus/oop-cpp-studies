#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include <vector>
#include <ios>
#include <limits>
#include <algorithm>

#include "pessoa.h"
#include "endereco.h"
#include "funcionario.h"
#include "empresario.h"

using namespace std;

class Logica{
    private:
        vector<Funcionario*> funcionarios;
        vector<Empresario*> empresarios;
        int option;
        void initital_menu();
        void menu_options();
        void menu_funcionario();
        void menu_empresario();
        void cases_menu_funcionario();
        void cases_menu_empresario();
        Funcionario* create_funcionario();
        Empresario* create_empresario();
        Endereco *new_address();
        Telefone *new_phone();
        Email *new_email();


        void clear_buffer();

    public:
        void start();
};
#endif


