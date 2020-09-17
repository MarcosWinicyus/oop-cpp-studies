#include "endereco.h"

Endereco::Endereco() {}

void Endereco::set_complemento(const string &complemento){
    this->complemento = complemento;
}
void Endereco::set_bairro(const string &bairro){
    this->bairro = bairro;
}
void Endereco::set_cep(const string &cep){
    this->cep = cep;
}
void Endereco::set_rua(const string &rua){
    this->rua = rua;
}
void Endereco::set_numero(const int &numero){
    this->numero = numero;
}
string Endereco::get_complemento(){
    return complemento;
}
string Endereco::get_bairro(){
    return bairro;
}
string Endereco::get_cep(){
    return cep;
}
string Endereco::get_rua(){
    return rua;
}
int Endereco::get_numero(){
    return numero;
}