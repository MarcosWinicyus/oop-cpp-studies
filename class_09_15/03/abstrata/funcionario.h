#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;
class Funcionario{
    private:
        string nome;
        double salario;
    public:
        void set_nome(const string &);
        string get_nome();
        void set_salario(const double &);
        double get_salario();

        virtual double get_bonificacao() = 0;
        virtual ~Funcionario();
};
#endif