#ifndef ABPESSOA_H
#define ABPESSOA_H
#include <string>
using namespace std;
class AbPessoa{
    private:
        virtual void salvar() = 0; 
        virtual ~AbPessoa();
};
#endif