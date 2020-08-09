#include "tecnico.h"

Tecnico::Tecnico() : Assistente(){
    cout <<"Instanciando um Assistente Tecnico" << endl;
}

void Tecnico::set_bonus(const float &bonus){
    this->bonus = bonus;
}

float Tecnico::get_bonus(){
    return bonus;
}

float Tecnico::ganho_anual(){
    return ((get_salario() + bonus)* 12);
}

void Tecnico::exibir_dados(){
    cout << "================================================" << endl;
    cout << "Nome:..................: " <<  get_nome() << endl;
    cout << "Matricula:.............: " <<  get_matricula() << endl;
    cout << "Salario:...............: " <<  get_salario() << endl;
    cout << "Bonus:.................: " <<  get_bonus() << endl;
    cout << "Ganho Anual:...........: " <<  ganho_anual() << endl;
    cout << "================================================" << endl;
}