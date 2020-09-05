#include "empresario.h"


Empresario::Empresario(Endereco *endereco) : Pessoa(endereco) {}

void Empresario::set_investimento(const double &investimento_inicial){
    this->investimento_inicial = investimento_inicial;
}
double Empresario::get_investimento(){
    return investimento_inicial;
}
