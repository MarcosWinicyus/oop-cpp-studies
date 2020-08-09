#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    private:
        int idade;
        string nome;
    public:
        Pessoa();
        Pessoa(int idade, string nome);
        int getIdade();
        void setIdade(int idade);
        string getNome();
        void setNome(string nome);
};

#endif

