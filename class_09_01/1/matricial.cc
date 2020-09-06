#include "matricial.h"

Matricial::Matricial():Impressora(){
    cout <<"Instanciando tipo Matricial " << endl;
}
string Matricial::get_num_agulhas(){
    return num_agulhas;
}
void Matricial::set_num_agulhas(const string &num_agulhas){
    this-> num_agulhas = num_agulhas;
}
bool Matricial::get_imprime_vias(){
    return imprime_vias;
}
void Matricial::set_imprime_vias(const bool &imprime_vias){
    this -> imprime_vias = imprime_vias;
}