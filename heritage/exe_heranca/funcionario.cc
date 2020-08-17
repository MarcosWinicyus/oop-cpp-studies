#include "funcionario.h"

Funcionario::Funcionario(){
    cout << "================================================" << endl;
    cout << "Instanciando uma Funcionario" << endl;
}
void Funcionario::set_nome(const string &nome){
    this->nome = nome;
}
void Funcionario::set_salario(const float &salario){
    this->salario = salario;
}

string Funcionario::get_nome(){
    return nome;
}
float Funcionario::get_salario(){
    return salario;
}
void Funcionario::add_aumento(const float &aumento){
    salario = salario + aumento;
}
void Funcionario::exibir_dados(){
    cout << "================================================" << endl;
    cout << "Nome:..................: " <<  nome << endl;
    cout << "Salario:...............: " <<  salario << endl;
    cout << "Ganho Anual:...........: " <<  ganho_anual() << endl;
    cout << "================================================" << endl;
}

float Funcionario::ganho_anual(){
    return (salario * 12);
}
