#ifndef TELEFONE_H
#define TELEFONE_H
#include <string>
using namespace std;
class Telefone{
    private:
        string numero;
        int ddd;

    public:

        string get_numero();
        int get_ddd();

        void set_numero(const string &);
        void set_ddd(const int &);

};
#endif