#include "carne.h"

string Carne::get_tipo_carne(){
    return tipo_carne;
}
string Carne::get_data_validade_carne(){
    return data_validade_carne;
}

void Carne::set_tipo_carne(const string &tipo_carne){
    this->tipo_carne = tipo_carne;
}
void Carne::set_data_validade_carne(const string &data_validade_carne){
    this->data_validade_carne = data_validade_carne;
}
Carne::Carne() {}