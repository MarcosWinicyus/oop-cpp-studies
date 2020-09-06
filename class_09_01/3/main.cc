#include "gato.h"
#include "coelho.h"
#include "cachorro.h"
#include <iostream>
using namespace std;

int main(){
    Cachorro* c = new Cachorro();
    c->set_raca("Chow Chow"); 
    c->set_cor("preto");
    c->set_preco(100); 
    c->set_nascimento("04/05/2019");
    c->set_distancia_faro(4);
    c->set_intencidade_latido(50);    

    Gato* g = new Gato();
    g->set_raca("Persa"); 
    g->set_cor("Rajado");
    g->set_preco(50); 
    g->set_nascimento("23/11/2016");
    g->set_altura_pulo(2.10); 
    g->set_pelo_longo(true);

    Coelho* co = new Coelho();
    co->set_raca("Coelho"); 
    co->set_cor("Branco com Preto");
    co->set_preco(20); 
    co->set_nascimento("03/06/2020");
    co->set_cenouras_dia(3);
    co->set_pelo_longo(false);

    cout << "Cachorro  - Raca: "<< c->get_raca() << " Cor: "<< c->get_cor() << " Preco: "<< c->get_preco() << " Nascimento: "<< c->get_nascimento() << " Distancia faro: "<< c->get_distancia_faro() << " Intencidade latido: "<< c->get_intencidade_latido() << endl;
    cout << "Gato  - Raca: "<< g->get_raca() << " Cor: "<< g->get_cor() << " Preco: "<< g->get_preco() << " Nascimento: "<< g->get_nascimento() << " Altura Pulo: "<< g->get_altura_pulo() << " Pelo Longo: "<< g->get_pelo_longo() << endl;
    cout << "Coelho  - Raca: "<< co->get_raca() << " Cor: "<< co->get_cor() << " Preco: "<< co->get_preco() << " Nascimento: "<< co->get_nascimento() << " Cenouras por Dia: "<< co->get_cenouras_dia() << " Pelo Longo: "<< co->get_pelo_longo() << endl;
    return 0;
}