#ifndef CARRO_H
#define CARRO_H
#include<string>
using namespace std;

class Carro {
    private:
        int ano;
        string placa;
        double qtd_toneladas;
        string fabricante;

    public:
        Carro();
        void set_ano(const int &);
        void set_placa(const string &);
        void set_qtd_toneladas(const double &);
        void set_fabricante(const string &);
        int get_ano();
        string get_placa();
        double get_qtd_toneladas();
        string get_fabricante();
};
#endif