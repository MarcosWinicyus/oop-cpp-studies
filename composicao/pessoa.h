#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <vector>
#include "endereco.h"
#include "telefone.h"
using namespace std;
class Pessoa{
    private:
        string nome;
        string cpf;
        Endereco endereco; //composição   Pessoa é composta por 1 endereco
        vector<Telefone> telefone ;
    public:
        Pessoa(const Endereco &);
        void set_nome(const string &);
        string get_nome();
        void set_cpf(const string &);
        string get_cpf();
        void set_endereco(const Endereco &);
        Endereco get_endereco();
        void add_telefone(const telefone &);
        vector<Telefone> get_telefones();
};
#endif