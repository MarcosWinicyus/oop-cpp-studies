#ifndef FISICO_H
#define FISICO_H
#include "livro.h"
class Fisico:public Livro{
    private:
        string nome;
    public:
        void set_nome(const string & );
        void set_tamanho(const int &);

        string get_nome(); 
        int get_tamanho(); 
              
};
#endif

