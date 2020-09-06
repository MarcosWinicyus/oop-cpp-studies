#include "impressora.h"
#include "matricial.h"
#include "laser.h"
#include <iostream>
using namespace std;

int main(){
    Matricial* m = new Matricial();
    m->set_marca("Brother");
    m->set_modelo("ES-MAT3"); 
    m->set_colorido(false); 
    m->set_peso(11.00);
    m->set_num_agulhas("120"); 
    m->set_imprime_vias(true);   

    Laser* l = new Laser();
    l->set_marca("HP");
    l->set_modelo("Deskjet"); 
    l->set_colorido(true); 
    l->set_peso(5.00);
    l->set_capacidade_toner(10000.00); 
    l->set_frente_verso(true);

    cout << "Matricial  - Marca: "<< m->get_marca() << " Modelo: "<< m->get_modelo() << " Colorido: "<< m->get_colorido() << " Peso: "<< m->get_peso() << " Num Agrulhas: "<< m->get_num_agulhas() << " Imprime Vias: "<< m->get_imprime_vias() << endl;
    cout << "Laser  - Marca: "<< l->get_marca() << " Modelo: "<< l->get_modelo() << " Colorido: "<< l->get_colorido() << " Peso: "<< l->get_peso() << " Cap Toner: "<< l->get_capacidade_toner() << " Frente e Verso: "<< l->get_frente_verso() << endl;
    return 0;
}