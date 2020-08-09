#include "funcionario.h"
#include "assistente.h"
#include "tecnico.h"
#include "administrativo.h"
#include <iostream>
using namespace std;

int main(){

    Tecnico* a = new Tecnico();
    a->set_matricula("X1293AKS112DJ");
    a->set_nome("Marcos");
    a->set_salario(1500.00);
    a->set_bonus(300);
    a->exibir_dados();

    // =================================================================

    Administrativo* b = new Administrativo();
    b->set_matricula("X1293AKS112DJ");
    b->set_nome("Leiliane");
    b->set_salario(1500.00);
    b->set_adiconal_noturno(true);
    b->set_adiconal(600);
    b->exibir_dados();

    return 0;
}