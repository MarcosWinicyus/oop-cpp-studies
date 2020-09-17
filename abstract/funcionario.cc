#include "funcionario.h"

void Funcionario::set_nome(const string &nome){
    this->nome = nome;
}
void Funcionario::set_salario(const double &salario){
    this->salario = salario;
}

string Funcionario::get_nome(){
    return nome;
}
double Funcionario::get_salario(){
    return salario;
}
Funcionario::~Funcionario(){
    
}