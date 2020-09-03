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
        Endereco endereco; // composição
        Telefone* telefone; // agregação pode ou não ter um telefone
        Email** emails; // agregação pode ou não ter multiplos - email
    public:
        Pessoa(const Endereco &);
        void set_nome(const string &);
        void set_rg(const string &);
        void set_endereco(const Endereco &);
        void set_telefone(Telefone* telefone);
        void set_emails(Email** email);
        string get_nome();
        string get_rg();
        Endereco get_endereco();
        Email** get_emails();
        Telefone* get_telefone();
};
#endif