#include "aviao.h"

Aviao::Aviao():Veiculo(){
    cout <<"Instanciando tipo Aviao " << endl;
}

int Aviao::get_num_turbinas(){
    return num_turbinas;
}

void Aviao::set_num_turbinas(const int &num_turbinas){
    this->num_turbinas = num_turbinas;
}

string Aviao::get_prefixo(){
    return prefixo;
}

void Aviao::set_prefixo(const string &prefixo){
    this->prefixo = prefixo;
}