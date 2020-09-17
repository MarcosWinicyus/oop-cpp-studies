#ifndef PRODUTO_H
#define PRODUTO_H
#include "compra.h"

class Produto:public Pedido{
    private:
        string descricao;
        int preco;

        int get_preco();
        void set_preco(const int &); 
        
        Produto(); 
};
#endif