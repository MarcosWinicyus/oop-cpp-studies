#include "endereco.h"

void Endereco::set_bairro(const string & bairro){
    this->bairro = bairro;
}
string Endereco::get_bairro(){
    return this->bairro;
}
void Endereco::set_cep(const string &cep){
    this->cep = cep;
}
string  Endereco::get_cep(){
    return this->cep;
}
void Endereco::set_cidade(const string &cidade){
    this->cidade = cidade;
}
string Endereco::get_cidade(){
    return this->cidade;
}
void Endereco::set_logradouro(const string &logradouro){
    this->logradouro = logradouro;
}
string Endereco::get_logradouro(){
    return this->logradouro;
}
void Endereco::set_numero(const int & numero){
    this->numero = numero;
}
int Endereco::get_numero(){
    return this->numero;
}