#ifndef TELEFONE_H
#define TELEFONE_H
#include <string>
using namespace std;
class Telefone{
    private:
        string ddd;
        string numero;
        string pais;
    public:
        void set_ddd(const string &);
        void set_numero(const string &);
        void set_pais(const string &);
        string get_ddd();
        string get_numero();
        string get_pais();
};
#endif