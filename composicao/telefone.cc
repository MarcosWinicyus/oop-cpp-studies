#include "telefone.h"


void Telefone::set_numero(const string &numero){
    this->numero = numero;
}
string Telefone::get_numero(){
    return this->numero;
}

void Telefone::set_ddd(const int & ddd){
    this->ddd = ddd;
}
int Telefone::get_ddd(){
    return this->ddd;
}