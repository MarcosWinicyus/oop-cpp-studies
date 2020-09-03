#include "pessoa.h"

void Pessoa::set_emails(Email** emails){
    this->emails = emails;
}
void Pessoa::set_endereco(const Endereco& endereco){
    this->endereco = endereco;
}
void Pessoa::set_nome(const string &nome){
    this->nome = nome;
}
void Pessoa::set_rg(const string &rg){
    this->rg = rg;
}
void Pessoa::set_telefone(Telefone* telefone){
    this->telefone = telefone;
}

Email** Pessoa::get_emails(){
    return emails;
}
Endereco Pessoa::get_endereco(){
    return endereco;
}
string Pessoa::get_nome(){
    return nome;
}
string Pessoa::get_rg(){
    return rg;
}
Telefone* Pessoa::get_telefone(){
    return telefone;
}

Pessoa::Pessoa(const Endereco &endereco){
    set_endereco(endereco);
}