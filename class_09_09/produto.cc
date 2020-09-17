#include "produto.h"

int Produto::get_preco(){
    return preco;
}
void Produto::set_preco(const int &preco){
    this->preco = preco;
}
Produto::Produto() {}