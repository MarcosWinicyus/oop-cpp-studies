#include "endereco.h"

Endereco::Endereco() {}

Endereco::Endereco(const string logradouro, const string bairro, const string cidade, const string cep, int numero)
{
    this->cidade = cidade;
    this->bairro = bairro;
    this->logradouro = logradouro;
    this->cep = cep;
    this->numero = numero;
}

void Endereco::set_logradouro(const string &logradouro){
    this->logradouro = logradouro;
}
void Endereco::set_bairro(const string &bairro){
    this->bairro = bairro;
}
void Endereco::set_cep(const string &cep){
    this->cep = cep;
}
void Endereco::set_cidade(const string &cidade){
    this->cidade = cidade;
}
void Endereco::set_numero(const int &numero){
    this->numero = numero;
}
string Endereco::get_logradouro(){
    return logradouro;
}
string Endereco::get_bairro(){
    return bairro;
}
string Endereco::get_cep(){
    return cep;
}
string Endereco::get_cidade(){
    return cidade;
}
int Endereco::get_numero(){
    return numero;
}