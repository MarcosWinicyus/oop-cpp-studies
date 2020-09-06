#ifndef CARRO_H
#define CARRO_H
#include "veiculo.h"
#include <string>
using namespace std;

class Carro : public Veiculo{
    public:
        Carro();
        int get_num_portas();
        void set_num_portas(const int &);
        string get_placa();
        void set_placa(const string &);
        
    private:
        int num_portas;
        string placa;
        
};
#endif