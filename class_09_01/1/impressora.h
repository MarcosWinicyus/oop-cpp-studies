#ifndef IMPRESSORA_H
#define IMPRESSORA_H
#include <string>
#include <iostream>
using namespace std;

class Impressora {
    private:
        string marca;
        string modelo;
        bool colorido;
        double peso;
    public:
        Impressora();
        string get_marca();
        string get_modelo();
        bool get_colorido();
        double get_peso();

        void set_marca(const string &);
        void set_modelo(const string &);
        void set_colorido(const bool &);
        void set_peso(const double &);

};
#endif