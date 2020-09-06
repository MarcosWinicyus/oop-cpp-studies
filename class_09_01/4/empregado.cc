#include "empregado.h"

void Empregado::set_num_sessao(const int &num_sessao){
    this->num_sessao = num_sessao;
}
void Empregado::set_salario_base(const double &salario_base){
    this->salario_base = salario_base;
}
void Empregado::set_irs(const double &irs){
    this->irs = irs;
}

int Empregado::get_num_sessao(){
    return num_sessao;
}
double Empregado::get_salario_base(){
    return salario_base;
}
double Empregado::get_irs(){
    return irs;
}
double Empregado::get_salario(){
    return salario;
}

void Empregado::calcular_salario(){
    this->salario = salario_base - irs;
}

Empregado::Empregado():Pessoa(){
}