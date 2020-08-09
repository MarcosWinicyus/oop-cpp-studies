#include "administrativo.h"

Administrativo::Administrativo() : Assistente(){
    cout <<"Instanciando um Assistente Administrativo" << endl;
}


bool Administrativo::get_adiconal_noturno(){
    return adiconal_noturno;
}

void Administrativo::set_adiconal_noturno(const bool &adiconal_noturno){
    this->adiconal_noturno = adiconal_noturno;
}

void Administrativo::set_adiconal(const float &adiconal){
    this->adiconal = adiconal;
}

float Administrativo::get_adiconal(){
    return adiconal;
}

float Administrativo::ganho_anual(){
    if ( get_adiconal_noturno() == true ){
        return ((get_salario() + adiconal)* 12);
    }else{
        return (get_salario() * 12);
    }
}

void Administrativo::exibir_dados(){
    cout << "================================================" << endl;
    cout << "Nome:..................: " <<  get_nome() << endl;
    cout << "Matricula:.............: " <<  get_matricula() << endl;
    cout << "Salario:...............: " <<  get_salario() << endl;
    cout << "Possue adiconal? :.....: " <<  get_adiconal_noturno() << endl;
    cout << "Valor adiconal:........: " <<  get_adiconal() << endl;
    cout << "Ganho Anual:...........: " <<  ganho_anual() << endl;
    cout << "================================================" << endl;
}