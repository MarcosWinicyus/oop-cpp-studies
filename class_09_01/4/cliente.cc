#include "cliente.h"

void Cliente::set_plafond(const double &plafond){
    this->plafond = plafond;
}
void Cliente::set_valor_divida(const double &valor_divida){
    this->valor_divida = valor_divida;
}

double Cliente::get_plafond(){
    return plafond;
}
double Cliente::get_valor_divida(){
    return valor_divida;
}
double Cliente::obter_saldo(){
    return plafond - valor_divida;
}

Cliente::Cliente():Pessoa(){
}