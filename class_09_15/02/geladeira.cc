#include "geladeira.h"

string Geladeira::get_modelo(){
    return modelo;
}
int Geladeira::get_capacidade_litros(){
    return capacidade_litros;
}

void Geladeira::set_modelo(const string &modelo){
    this->modelo = modelo;
}
void Geladeira::set_capacidade_litros(const int &capacidade_litros){
    this->capacidade_litros = capacidade_litros;
}
Geladeira::Geladeira() {}