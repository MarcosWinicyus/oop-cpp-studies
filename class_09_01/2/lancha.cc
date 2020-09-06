#include "lancha.h"

Lancha::Lancha():Veiculo(){
    cout <<"Instanciando tipo Lancha " << endl;
}

int Lancha::get_num_motores(){
    return num_motores;
}

void Lancha::set_num_motores(const int &num_motores){
    this-> num_motores = num_motores;
}
