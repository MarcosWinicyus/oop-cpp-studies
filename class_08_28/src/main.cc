#include "email.h"
#include "telefone.h"
#include "endereco.h"
#include <iostream>
#include <vector>
#include "pessoa.h"
#include "funcionario.h"
#include "empresario.h"
int main(){

    /*Email* e = new Email();
    Telefone* f  = new Telefone();
    

    Email* emails[3] ;
    int i=0;

    for(i=0; i<3;i++)emails[i] = new Email();
   emails[0]->set_endereco("marlus.silva@ifgoiano.edu.br");
    emails[1]->set_endereco("marlus.silva@gmail.com.br");
    emails[2]->set_endereco("marlus.guitar@ig.edu.br");
    for(i=0; i<3;i++) cout << emails[i]->get_endereco() << endl;



    vector<Email*> vetor;
    
    Email* especial = new Email();
    especial->set_endereco("emailespecial@ifgoiano.edu.br");
    vetor.push_back(especial);



*/

    Pessoa* joao;
    Endereco endereco;
    endereco.set_cidade("Rio Verde");
    endereco.set_bairro("Jardim América");
    endereco.set_cep("75902500");
    endereco.set_logradouro("Rua Orozimbo Veloso de Godoi");
    endereco.set_numero(75);

    joao = new Pessoa(endereco);

    Email* dois_emails[2];

    dois_emails[0] = new Email();
    dois_emails[0]->set_endereco("joaozinhotroll@gmail.com");
    dois_emails[1] = new Email();
    dois_emails[1]->set_endereco("joaoadulto@gmail.com");


    Telefone* tel = new Telefone();
    tel->set_ddd("64");
    tel->set_numero("913586598");
    tel->set_pais("Brasil");

    joao->set_emails(dois_emails);
    joao->set_telefone(tel);
    cout << joao->get_emails()[1]->get_endereco() << endl;

    cout << ((joao->get_telefone() == NULL)?"Nao tem telefone":joao->get_telefone()->get_numero())<<endl;

    Funcionario* fernando = new Funcionario(endereco);
    fernando->set_salario(20000.00);
    fernando->set_nome("Fernando Santos");

    cout << "------------------------------FUNCIONARIO --------------------------"<<endl;

    cout << fernando->get_endereco().get_logradouro() << endl;
    cout << fernando->get_nome()<< endl;

    Empresario* maria = new Empresario(endereco);
    maria->set_investimento(1500000.00);
    maria->set_nome("maria Santos");

    cout << "------------------------------EMPRESARIO --------------------------"<<endl;

    cout << maria->get_endereco().get_logradouro() << endl;
    cout << maria->get_nome()<< endl;
}