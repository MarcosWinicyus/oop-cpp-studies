#include "vendedor.h"

void Vendedor::set_carro(Carro *carro){
    this->carro = carro;
}
void Vendedor::set_comicao(const double &comicao){
    this->comicao = comicao;
}
void Vendedor::set_valor_venda(const double &valor_venda){
    this->valor_venda =  valor_venda;
}

double Vendedor::get_valor_venda(){
    return valor_venda;
}
Carro* Vendedor::get_carro(){
    return carro;
}
double Vendedor::get_comicao(){
    return comicao;
}
double Vendedor::get_salario(){
    return salario;
}
void Vendedor::calcular_salario(){
    this->salario = (get_salario_base() - get_irs()) + comicao;   
}

Vendedor::Vendedor(Carro *carro):Empregado(){
    this->carro = carro;
}
