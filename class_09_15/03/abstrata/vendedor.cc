#include "vendedor.h"

double Vendedor::get_bonificacao(){
    return get_salario() + 1000;
}

void Vendedor::set_empresa(const string &empresa){
    this->empresa = empresa;
}
string Vendedor::get_empresa(){
    return empresa;
}