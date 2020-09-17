#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;
class Livro{
    private:
        int tamanho;
    public:
        virtual void set_tamanho() = 0;
        virtual int get_tamanho() = 0;
        virtual ~Livro();
};
#endif

