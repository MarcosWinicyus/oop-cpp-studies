#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
using namespace std;
class Pedido{
    private:
        int numero;
        string data;
        int qtdItens;
        virtual ~Pedido();
};
#endif