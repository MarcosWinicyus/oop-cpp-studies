#ifndef PESSOA_H
#define PESSOA_H
#include "abstrata.h"
#include "endereco.h"
#include "produto.h"
#include <vector>
class Pessoa:public AbPessoa{
    private:
        string nome;
        int cpf;
        int rg;
        Endereco* endereco; // composição

        vector<Produto> produto ;
        Endereco* get_endereco(); 
        void atualizarDivida();
        int atualizarDivida(const int &valor);
        int atualizarDivida(const int &valor1, const int &valor2); 
        
};
#endif