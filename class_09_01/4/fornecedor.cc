#include "fornecedor.h"

void Fornecedor::set_plafond(const double &plafond){
    this->plafond = plafond;
}
void Fornecedor::set_valor_divida(const double &valor_divida){
    this->valor_divida = valor_divida;
}

double Fornecedor::get_plafond(){
    return plafond;
}
double Fornecedor::get_valor_divida(){
    return valor_divida;
}
double Fornecedor::obter_saldo(){
    return plafond - valor_divida;
}

Fornecedor::Fornecedor():Pessoa(){
}