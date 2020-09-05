#include "pessoa.h"

void Pessoa::set_email(Email *email){
    this->email = email;
}
void Pessoa::set_endereco(Endereco *endereco){
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
void Pessoa::set_cpf(const string &cpf)
{
    this->cpf = cpf;
}

Email* Pessoa::get_email(){
    return email;
}
Endereco *Pessoa::get_endereco(){
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

Pessoa::Pessoa(Endereco *endereco){
    this->endereco = endereco;
}

string Pessoa::get_cpf()
{
    return this->cpf;
}