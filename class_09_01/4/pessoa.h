#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class Pessoa{
    private:
        string nome;
        string num_comtribuinte;
        int idade;

    public:
        void set_nome(const string &);
        void set_num_comtribuinte(const string &);
        void set_idade(const int &);

        string get_nome();
        string get_num_comtribuinte();
        int get_idade();
        Pessoa();
};
#endif