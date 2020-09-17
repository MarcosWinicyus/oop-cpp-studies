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

        virtual double get_bonificacao() = 0; // também chamado na literatura de método puramente virtual ou método abstrato, classes com este método 
        //não podem ser instânciadas  ( Funcionário f = new Funcionário() ) não existe. 
        virtual ~Funcionario();
};
#endif