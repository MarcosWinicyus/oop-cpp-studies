#ifndef AUDIO_H
#define AUDIO_H
#include "livro.h"
class Audio:public Livro{
    private:
        string nome;
    public:
        void set_nome(const string & );
        void set_tamanho(const int &);

        string get_nome(); 
        int get_tamanho(); 
              
};
#endif

