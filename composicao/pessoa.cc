#include "pessoa.h"

void Pessoa::add_telefone(const Telefone &telefone){
    this->telefones.push_back(telefone);
}
vector<Telefone> Pessoa::get_telefones(){
    return this->telefones;
}

Pessoa::Pessoa(const Endereco & endereco){
    this->endereco = endereco;
}
void Pessoa::set_nome(const string &nome){
    this->nome = nome;
}
string Pessoa::get_nome(){
    return this->nome;
}
void Pessoa::set_cpf(const string &cpf){
    this->cpf = cpf;
}
string Pessoa::get_cpf(){
    return cpf;
}
Endereco Pessoa::get_endereco(){
    return this->endereco;
}
void Pessoa::set_endereco(const Endereco &endereco){
    this->endereco = endereco;
}