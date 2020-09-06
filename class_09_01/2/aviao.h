#ifndef AVIAO_H
#define AVIAO_H
#include "veiculo.h"
#include <string>
using namespace std;

class Aviao : public Veiculo{
    private:
        string prefixo;
        int num_turbinas;

    public:
        Aviao();
        string get_prefixo();
        void set_prefixo(const string &);
        int get_num_turbinas();
        void set_num_turbinas(const int &);
        
};
#endif