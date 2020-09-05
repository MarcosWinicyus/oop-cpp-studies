#include "funcionario.h"

Funcionario::Funcionario(Endereco *endereco) : Pessoa(endereco){

}

void Funcionario::set_salario(const double &salario){
    this->salario = salario;
}
double Funcionario::get_salario(){
    return salario;
}