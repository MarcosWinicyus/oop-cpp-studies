#include "calculo.h"
#include <iostream>

using namespace std;

int main(){
    Calculo c = new Calculo();

    int resultado = c->soma(1.8f, 10);

    cout<<resultado<<endl;
}