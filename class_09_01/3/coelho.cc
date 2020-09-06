#include "coelho.h"

Coelho::Coelho():Animal(){
    cout << "Instanciando tipo Coelho" << endl;
}
void Coelho::set_cenouras_dia(const int &cenouras_dia){ 
    this->cenouras_dia = cenouras_dia;
}
void Coelho::set_pelo_longo(const bool &pelo_longo){ 
    this->pelo_longo = pelo_longo;
}

int Coelho::get_cenouras_dia(){ 
    return cenouras_dia;
}
bool Coelho::get_pelo_longo(){ 
    return pelo_longo;
}


