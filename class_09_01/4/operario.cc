#include "operario.h"

void Operario::set_valor_producao(const double &valor_producao){
    this->valor_producao = valor_producao;
}
void Operario::set_comicao(const double &comicao){
    this->comicao = comicao;
}
double Operario::get_valor_producao(){
    return valor_producao;
}
double Operario::get_comicao(){
    return comicao;
}
double Operario::get_salario(){
    return salario;
}
void Operario::calcular_salario(){
    this->salario = (get_salario_base() - get_irs()) + comicao;   
}

Operario::Operario():Empregado(){}