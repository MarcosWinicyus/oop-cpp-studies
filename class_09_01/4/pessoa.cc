#include "pessoa.h"

void Pessoa::set_nome(const string &nome){
    this->nome = nome;
}
void Pessoa::set_num_comtribuinte(const string &num_comtribuinte){
    this->num_comtribuinte = num_comtribuinte;
}
void Pessoa::set_idade(const int &idade){
    this->idade = idade;
}

string Pessoa::get_nome(){
    return nome;
}
string Pessoa::get_num_comtribuinte(){
    return num_comtribuinte;
}
int Pessoa::get_idade(){
    return idade;
}

Pessoa::Pessoa(){
}