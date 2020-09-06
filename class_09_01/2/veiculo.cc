#include "veiculo.h"

Veiculo::Veiculo(){
    cout << "Instanciando um Veiculo" << endl;
}
void Veiculo::set_modelo(const string &modelo){ 
    this->modelo = modelo;
}
void Veiculo::set_num_lugares(const int &num_lugares){ 
    this->num_lugares = num_lugares;
}
void Veiculo::set_comprimento(const int &comprimento){ 
    this->comprimento = comprimento;
}
void Veiculo::set_ano(const int &ano){ 
    this->ano = ano;
}
void Veiculo::set_cor(const string &cor){ 
    this->cor = cor;
}

string Veiculo::get_modelo(){ 
    return modelo;
}
int Veiculo::get_num_lugares( ){ 
    return num_lugares;
}
int Veiculo::get_comprimento(){ 
    return comprimento;
}
int Veiculo::get_ano(){ 
    return ano;
}
string Veiculo::get_cor(){ 
    return cor;
}

