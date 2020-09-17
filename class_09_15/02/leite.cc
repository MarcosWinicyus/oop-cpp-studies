#include "leite.h"

string Leite::get_marca_leite(){
    return marca_leite;
}
string Leite::get_data_validade_leite(){
    return data_validade_leite;
}

void Leite::set_marca_leite(const string &marca_leite){
    this->marca_leite = marca_leite;
}
void Leite::set_data_validade_leite(const string &data_validade_leite){
    this->data_validade_leite = data_validade_leite;
}
Leite::Leite() {}