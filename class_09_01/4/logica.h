#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include <vector>
#include <ios>
#include <limits>
#include <algorithm>

#include "pessoa.h"
#include "fornecedor.h"
#include "empregado.h"
#include "cliente.h"
#include "administrador.h"
#include "operario.h"
#include "vendedor.h"
#include "carro.h"

using namespace std;

class Logica{
    private:
        vector<Fornecedor*> fornecedores;
        vector<Cliente*> clientes;
        vector<Administrador*> administradores;
        vector<Operario*> operarios;
        vector<Vendedor*> vendedores;
        
        int option;
        Carro* carro;

        void initital_menu();
        void menu_options();
        void menu_fornecedor();
        void menu_cliente();
        void menu_empregado();
        void initital_menu_empregado();
        void menu_options_empregado();

        void menu_administrador();
        void menu_operario();
        void menu_vendedor();
        
        void cases_menu_fornecedor();
        void cases_menu_cliente();
        void cases_menu_administrador();
        void cases_menu_operario();
        void cases_menu_vendedor();

        Fornecedor* create_fornecedor();
        Cliente* create_cliente();
        Administrador* create_administrador();
        Operario* create_operario();
        Vendedor* create_vendedor();
        Carro* create_carro();

        void clear_buffer();

    public:
        void start();
};
#endif


