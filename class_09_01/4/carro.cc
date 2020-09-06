#include "carro.h"

Carro::Carro() {}

void Carro::set_ano(const int &ano){
    this->ano = ano;
}
void Carro::set_placa(const string &placa){
    this->placa = placa;
}
void Carro::set_qtd_toneladas(const double &qtd_toneladas){
    this->qtd_toneladas = qtd_toneladas;
}
void Carro::set_fabricante(const string &fabricante){
    this->fabricante = fabricante;
}

int Carro::get_ano(){
    return ano;
}
string Carro::get_placa(){
    return placa;
}
double Carro::get_qtd_toneladas(){
    return qtd_toneladas;
}
string Carro::get_fabricante(){
    return fabricante;
}