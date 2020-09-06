#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>
using namespace std;

class Veiculo {
    private:
        string modelo;
        int num_lugares;
        int comprimento;
        int ano;
        string cor;
    public:
        Veiculo();
        string get_modelo();
        int get_num_lugares();
        int get_comprimento();
        int get_ano();
        string get_cor();

        void set_modelo(const string &);
        void set_num_lugares(const int &);
        void set_comprimento(const int &);
        void set_ano(const int &);
        void set_cor(const string &);

};
#endif