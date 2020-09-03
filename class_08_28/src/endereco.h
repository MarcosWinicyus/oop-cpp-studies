#ifndef ENDERECO_H
#define ENDERECO_H
#include<string>
using namespace std;
class Endereco{
    private:
        string logradouro;
        string bairro;
        string cidade;
        int numero;
        string cep;
    public:
        void set_logradouro(const string &);
        void set_bairro(const string &);
        void set_cidade(const string &);
        void set_numero(const int &);
        void set_cep(const string &);
        string get_logradouro();
        string get_bairro();
        string get_cidade();
        int get_numero();
        string get_cep();
};
#endif