#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "endereco.h"
#include "email.h"
#include "telefone.h"
using namespace std;
class Pessoa{
    private:
        string nome;
        string rg;
        string cpf;
        Endereco* endereco; // composição
        Telefone* telefone; // agregação pode ou não ter um telefone
        Email* email; // agregação pode ou não ter multiplos - email
    public:
        void set_nome(const string &);
        void set_rg(const string &);
        void set_endereco(Endereco *endereco);
        void set_telefone(Telefone* telefone);
        void set_cpf(const string &cpf);
        void set_email(Email* email);
        string get_nome();
        string get_cpf();
        string get_rg();
        Endereco* get_endereco();
        Email* get_email();
        Telefone* get_telefone();
        Pessoa(Endereco *endereco);
};
#endif