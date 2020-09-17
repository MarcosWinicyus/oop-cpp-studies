#ifndef CARNE_H
#define CARNE_H
#include <string>
using namespace std;

class Carne{
    private:
        string tipo_carne;
        string data_validade_carne;

    public:
        void set_tipo_carne(const string &);
        void set_data_validade_carne(const string &);

        string get_tipo_carne();
        string get_data_validade_carne();

        Carne();
};
#endif