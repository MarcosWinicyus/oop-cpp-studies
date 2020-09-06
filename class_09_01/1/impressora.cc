#include "impressora.h"

Impressora::Impressora(){
    cout << "Instanciando uma impessora" << endl;
}
void Impressora::set_marca(const string &marca){ 
    this->marca = marca;
}
void Impressora::set_modelo(const string &modelo){ 
    this->modelo = modelo;
}
void Impressora::set_colorido(const bool &colorido){ 
    this->colorido = colorido;
}
void Impressora::set_peso(const double &peso){ 
    this->peso = peso;
}

string Impressora::get_marca( ){ 
    return marca;
}
string Impressora::get_modelo(){ 
    return modelo;
}
bool Impressora::get_colorido(){ 
    return colorido;
}
double Impressora::get_peso(){ 
    return peso;
}

