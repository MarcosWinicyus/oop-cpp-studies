#include "gerente.h"

double Gerente::get_bonificacao(){
    return get_salario() + 1000;
}

void Gerente::set_empresa(const string &empresa){
    this->empresa = empresa;
}
string Gerente::get_empresa(){
    return empresa;
}