#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class Animal {
    private:
        string raca;
        string cor;
        double preco;
        string nascimento;

    public:
        Animal();
        string get_raca();
        string get_cor();
        double get_preco();
        string get_nascimento();
    
        void set_raca(const string &);
        void set_cor(const string &);
        void set_preco(const double &);
        void set_nascimento(const string &);


};
#endif