#include "laser.h"

Laser::Laser():Impressora(){
    cout <<"Instanciando tipo Laser " << endl;
}
double Laser::get_capacidade_toner(){
    return capacidade_toner;
}
void Laser::set_capacidade_toner(const double &capacidade_toner){
    this-> capacidade_toner = capacidade_toner;
}
bool Laser::get_frente_verso(){
    return frente_verso;
}
void Laser::set_frente_verso(const bool &frente_verso){
    this -> frente_verso = frente_verso;
}