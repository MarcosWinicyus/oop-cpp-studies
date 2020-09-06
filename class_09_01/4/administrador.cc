#include "administrador.h"

void Administrador::set_ajuda_custo(const double &ajuda_custo){
    this->ajuda_custo = ajuda_custo;
}

double Administrador::get_ajuda_custo(){
    return ajuda_custo;
}
double Administrador::get_salario(){
    return salario;
}
void Administrador::calcular_salario(){
    this->salario = (get_salario_base() - get_irs()) + ajuda_custo;   
}

Administrador::Administrador():Empregado(){}