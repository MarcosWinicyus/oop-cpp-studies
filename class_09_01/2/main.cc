#include "aviao.h"
#include "lancha.h"
#include "carro.h"
#include <iostream>
using namespace std;

int main(){
    Carro* c = new Carro();
    c->set_modelo("HB20"); 
    c->set_num_lugares(4);
    c->set_comprimento(4); 
    c->set_ano(2020);
    c->set_cor("Preto"); 
    c->set_num_portas(4);
    c->set_placa("USX345");    

    Lancha* l = new Lancha();
    l->set_modelo("Fibrafort"); 
    l->set_num_lugares(15);
    l->set_comprimento(20); 
    l->set_ano(2018);
    l->set_cor("Branco"); 
    l->set_num_motores(2);

    Aviao* a = new Aviao();
    a->set_modelo("boing"); 
    a->set_num_lugares(256);
    a->set_comprimento(56); 
    a->set_ano(2016);
    a->set_cor("Branco"); 
    a->set_prefixo("1232asd");
    a->set_num_turbinas(4);

    cout << "Carro  - Modelo: "<< c->get_modelo() << " Num Lugares: "<< c->get_num_lugares() << " Comprimento: "<< c->get_comprimento() << " Ano: "<< c->get_ano() << " Cor: "<< c->get_cor() << " Num portas: "<< c->get_num_portas() << " Placa: "<< c->get_placa() << endl;
    cout << "Aviao  - Modelo: "<< a->get_modelo() << " Num Lugares: "<< a->get_num_lugares() << " Comprimento: "<< a->get_comprimento() << " Ano: "<< a->get_ano() << " Cor: "<< a->get_cor() << " Prefixo: "<< a->get_prefixo() << " Num Turbinas: "<< a->get_num_turbinas()<< endl; 
    cout << "Lancha  - Modelo: "<< l->get_modelo() << " Num Lugares: "<< l->get_num_lugares() << " Comprimento: "<< l->get_comprimento() << " Ano: "<< l->get_ano() << " Cor: "<< l->get_cor() << " Num Motores: "<< l->get_num_motores() << endl;
    return 0;
}