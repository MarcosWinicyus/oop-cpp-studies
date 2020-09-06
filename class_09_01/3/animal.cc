#include "animal.h"

Animal::Animal(){
    cout << "Instanciando um Animal" << endl;
}
void Animal::set_raca(const string &raca){ 
    this->raca = raca;
}
void Animal::set_preco(const double &preco){ 
    this->preco = preco;
}
void Animal::set_nascimento(const string &nascimento){ 
    this->nascimento = nascimento;
}
void Animal::set_cor(const string &cor){ 
    this->cor = cor;
}

string Animal::get_raca(){ 
    return raca;
}
string Animal::get_cor( ){ 
    return cor;
}
double Animal::get_preco(){ 
    return preco;
}
string Animal::get_nascimento(){ 
    return nascimento;
}
