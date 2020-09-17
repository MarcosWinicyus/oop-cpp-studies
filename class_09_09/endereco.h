#ifndef ENDERECO_H
#define ENDERECO_H
#include<string>
using namespace std;
class Endereco{
    private:
        string rua;
        int numero;
        string complemento;
        string bairro;
        string cep;
    public:
        Endereco();

        void set_rua(const string &);
        void set_numero(const int &);
        void set_complemento(const string &);
        void set_bairro(const string &);
        void set_cep(const string &);

        string get_rua();
        string get_bairro();
        string get_complemento();
        int get_numero();
        string get_cep();

        void atualizar();
};
#endif