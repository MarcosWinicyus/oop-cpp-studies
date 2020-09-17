#include "gerente.h"
#include "funcionario.h"
#include "presidente.h"
#include <iostream>
using namespace std;
int main(){
      //Instânciando uma classe Abstrata
      Gerente* g = new Gerente();
      g->set_salario(2500);

      cout << g->get_bonificacao() << endl;// método abstrato de gerente

      Presidente* p = new Presidente(); 

      cout << p->get_bonificacao() << endl;
    


return 0;
}
