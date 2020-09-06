#include "cachorro.h"

Cachorro::Cachorro():Animal(){
    cout << "Instanciando tipo Cachorro" << endl;
}
void Cachorro::set_distancia_faro(const double &distancia_faro){ 
    this->distancia_faro = distancia_faro;
}
void Cachorro::set_intencidade_latido(const double &intencidade_latido){ 
    this->intencidade_latido = intencidade_latido;
}

double Cachorro::get_distancia_faro(){ 
    return distancia_faro;
}
double Cachorro::get_intencidade_latido(){ 
    return intencidade_latido;
}


