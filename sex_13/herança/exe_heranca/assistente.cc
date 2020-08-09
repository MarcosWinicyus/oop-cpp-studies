#include "assistente.h"

Assistente::Assistente():Funcionario(){
    cout <<"Instanciando um Assistente " << endl;
}

void Assistente::set_matricula(const string &matricula){
    this->matricula = matricula;
}

string Assistente::get_matricula(){
    return matricula;
}
void Assistente::exibir_dados(){
    cout << "================================================" << endl;
    cout << "Nome:..................: " <<  get_nome() << endl;
    cout << "Salario:...............: " <<  get_salario() << endl;
    cout << "Ganho Anual:...........: " <<  ganho_anual() << endl;
    cout << "Matricula:.............: " <<  get_matricula() << endl;
    cout << "================================================" << endl;
}