#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
using namespace std;
class Endereco{
    private:
        string logradouro;
        string bairro;
        int numero;
        string cep;
        string cidade;
    public:
        string get_logradouro();
        string get_bairro();
        int get_numero();
        string get_cep();
        string get_cidade();
        void set_logradouro(const string &);
        void set_bairro(const string &);
        void set_numero(const int &);
        void set_cep(const string &);
        void set_cidade(const string &);

};
#endif