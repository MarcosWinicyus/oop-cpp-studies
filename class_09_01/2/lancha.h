#ifndef LANCHA_H
#define LANCHA_H
#include "veiculo.h"
#include <string>
using namespace std;

class Lancha : public Veiculo{
    public:
        Lancha();
        int get_num_motores();
        void set_num_motores(const int &);
        
    private:
        int num_motores;
        
};
#endif