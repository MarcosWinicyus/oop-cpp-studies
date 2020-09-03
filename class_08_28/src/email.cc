#include "email.h"

void Email::set_endereco(const string & endereco){
    this->endereco = endereco;
}
string Email::get_endereco(){
    return this->endereco;
}