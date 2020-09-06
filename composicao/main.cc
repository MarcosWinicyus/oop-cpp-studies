#include "pessoa.h"
#include "endereco.h"
#include<iostream>
using namespace std;
int main(){
    Endereco end;
    end.set_bairro("Jardim América");
    end.set_cep("75902500");
    end.set_cidade("Rio Verde");
    end.set_logradouro("Rua Orozimbo Veloso de Godoy");
    end.set_numero(385);

    Pessoa* joao = new Pessoa(end);
    joao->set_nome("João Francisco Perreira");
    joao->set_cpf("123.456.789-12");
    

    cout << joao->get_nome() << endl;
    cout << joao->get_endereco().get_logradouro() << endl;

    Telefone tel_a;
    Telefone tel_b;

    tel_a.set_ddd(62);
    tel_a.set_numero("1111-1111);

    tel_a.set_ddd(87);
    tel_a.set_numero("2222-2222);

    joao->add_telefone(tel_a);
    joao->add_telefone(tel_b);

    for(vector<Telefone>::iterator it != joao->get_telefones().begin(); it != joao->get_telefones().end(); it++){
        cout << "O "<<joao->get_nome() << endl;
            << "Possui " << (*it).get_ddd() <<  " "<< (*it).get_numero() << endl;
    }

    return 0;
}