#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    Moto *v1 = new Moto();

    v1->imp();

    Carro *v2 = new Carro();

    v2->imp();

    Caca_jato *v3 = new Caca_jato();

    v3->imp();

    return 0;
}