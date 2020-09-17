#ifndef LEITE_H
#define LEITE_H
#include <string>
using namespace std;

class Leite{
    private:
        string marca_leite;
        string data_validade_leite;

    public:
        void set_marca_leite(const string &);
        void set_data_validade_leite(const string &);

        string get_marca_leite();
        string get_data_validade_leite();

        Leite();
};
#endif