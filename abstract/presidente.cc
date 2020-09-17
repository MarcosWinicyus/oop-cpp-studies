#include "presidente.h"

void Presidente::set_pais(const string &pais){
    this->pais = pais;
}
string Presidente::get_pais(){
    return pais;
}

double Presidente::get_bonificacao(){
    return get_salario() + 390000; 
}