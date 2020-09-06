#include "gato.h"

Gato::Gato():Animal(){
    cout << "Instanciando tipo Gato" << endl;
}
void Gato::set_altura_pulo(const double &altura_pulo){ 
    this->altura_pulo = altura_pulo;
}
void Gato::set_pelo_longo(const bool &pelo_longo){ 
    this->pelo_longo = pelo_longo;
}

double Gato::get_altura_pulo(){ 
    return altura_pulo;
}
bool Gato::get_pelo_longo(){ 
    return pelo_longo;
}


