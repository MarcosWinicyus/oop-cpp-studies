#ifndef DERIVADA_H
#define DERIVADA_H
#include "base.h"
class Derivada : public Base{
    public:
        virtual  void imprimir(); // estamos sobreescrendo um método já existente com outra lógica de programação, seja ela reaproveitando a lógica anterior ou não
};
#endif