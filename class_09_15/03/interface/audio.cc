#include "audio.h"

void Audio::set_tamanho(const int &tamanho){
    this->tamanho = tamanho;
}
int Audio::get_tamanho(){
    return tamanho;
}

void Audio::set_nome(const string &nome){
    this->nome = nome;
}
string Audio::get_nome(){
    return nome;
}

