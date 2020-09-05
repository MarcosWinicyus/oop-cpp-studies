#include "telefone.h"

Telefone::Telefone(const string &pais, const string &ddd, const string &numero)
{
    this->ddd = ddd;
    this->pais = pais;
    this->numero = numero;
}

void Telefone::set_ddd(const string & ddd){
    this->ddd = ddd;
}
void Telefone::set_numero(const string &numero){
    this->numero = numero;
}
void Telefone::set_pais(const string &pais){
    this->pais = pais;
}
string Telefone::get_ddd(){
    return ddd;
}
string Telefone::get_numero(){
   // this->numero
    return numero;
}
string Telefone::get_pais(){
    return pais;
}