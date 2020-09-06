#include "carro.h"

Carro::Carro():Veiculo(){
    cout <<"Instanciando tipo Carro " << endl;
}

int Carro::get_num_portas(){
    return num_portas;
}

void Carro::set_num_portas(const int &num_portas){
    this-> num_portas = num_portas;
}

string Carro::get_placa(){
    return placa;
}

void Carro::set_placa(const string &placa){
    this -> placa = placa;
}