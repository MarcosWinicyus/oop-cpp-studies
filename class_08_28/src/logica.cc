#include "logica.h"

void Logica::start(){
    do
    {
        this->initital_menu();
        this->menu_options();
    } while (this->option > 0);
}

void Logica::initital_menu()
{
    cout << "-----------------INITIAL MENU-----------------" << endl;
    cout << "Digite 1: Menu de Empresarios." << endl;
    cout << "Digite 2: Menu de Funcionarios." << endl;
    cout << "Digite 0: Sair" << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
}

void Logica::menu_options()
{
    switch (this->option)
    {
    case 1:
        this->menu_empresario();
        break;

    case 2:
        this->menu_funcionario();
        break;

    default:
        break;
    }
}

void Logica::menu_funcionario()
{
    cout << "-----------------------MENU FUNCIONARIO------------------" << endl;
    cout << "Opcao 1: Adicionar um funcionario" << endl;
    cout << "Opcao 2: Pesquisar um funcionario" << endl;
    cout << "Opcao 3: Editar um funcionario" << endl;
    cout << "Opcao 4: Excluir um funcionario" << endl;
    cout << "Opcao 5: Listar todos" << endl;

    cout << "Opcao 0: Sair." << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_funcionario();
}

void Logica::cases_menu_funcionario()
{
    switch (this->option)
    {
    case 1:
    {
        Funcionario *f = this->create_funcionario();
        this->funcionarios.push_back(f);
        break;
    }

    case 5:
    {
        for (vector<Funcionario *>::iterator it = this->funcionarios.begin(); it != this->funcionarios.end(); it++)
        {
            cout << (*it)->get_nome() << endl;
        }
    }

    default:
        break;
    }
    this->option = 0;
}

Funcionario *Logica::create_funcionario()
{
    Funcionario *funcionario = new Funcionario(this->new_address());

    // clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    funcionario->set_nome(valor);
    valor.clear();

    cout << "rg: " <<endl;
    getline(cin, valor);
    funcionario->set_rg(valor);
    valor.clear();

    cout << "cpf: " <<endl;
    getline(cin, valor);
    funcionario->set_cpf(valor);
    valor.clear();

    cout << "salario: ";

    double salario;
    cin >> salario;

    funcionario->set_salario(salario);

    funcionario->set_telefone(this->new_phone());

    funcionario->set_email(this->new_email());

    return funcionario;
}

void Logica::menu_empresario()
{
   cout << "-----------------------MENU EMPRESARIO-----------------------------" <<endl;
   cout << "Opcao 1: Adicionar um novo empresario" <<endl;
   cout << "Opcao 2: Procurar um empresario" <<endl;
   cout << "Opcao 3: Editar um empresario" <<endl;
   cout << "Opcao 4: Deletar um empresario" <<endl;
   cout << "Opcao 4: Deletar um empresario" <<endl;
   cout << "Opcao 5: Listar todos" <<endl;
   cout << "Opcao 0: Sair" <<endl;
   cout << "Informe uma opcao: ";
   cin >> this->option;
    this->cases_menu_empresario();
}

void Logica::cases_menu_empresario()
{
    switch (this->option)
    {
    case 1:
    {
        Empresario *em = this->create_empresario();
        this->empresarios.push_back(em);
        break;
    }

    case 5:
    {
        for (vector<Empresario *>::iterator it = this->empresarios.begin(); it != this->empresarios.end(); it++)
        {
           cout << (*it)->get_nome() <<endl;
        }
    }

    default:
        break;
    }
    this->option = 0;
}

Empresario *Logica::create_empresario()
{
    Empresario *empresario = new Empresario(this->new_address());

    // clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    empresario->set_nome(valor);
    valor.clear();

    cout << "rg: " <<endl;
    getline(cin, valor);
    empresario->set_rg(valor);
    valor.clear();

    cout << "cpf: " <<endl;
    getline(cin, valor);
    empresario->set_cpf(valor);
    valor.clear();

    empresario->set_telefone(this->new_phone());

    empresario->set_email(this->new_email());

    cout << "investimento inicial: ";

    double investimento_inicial;
    cin >> investimento_inicial;

    empresario->set_investimento(investimento_inicial);

    return empresario;
}

Email *Logica::new_email()
{
    string value;

    clear_buffer();

    cout << "email: " << endl;
    getline(cin, value);
    return new Email(value);
}

Endereco *Logica::new_address()
{
    string valor;
    Endereco *end = new Endereco();

    clear_buffer();

    cout << "Logradouro: " << endl;
    getline(cin, valor);
    end->set_logradouro(valor);
    valor.clear();

    cout << "bairro: " << endl;
    getline(cin, valor);
    end->set_bairro(valor);
    valor.clear();

    cout << "cep: " << endl;
    getline(cin, valor);
    end->set_cep(valor);
    valor.clear();

    cout << "Numero: " << endl;
    int numero;
    cin >> numero;
    end->set_numero(numero);
    cin.ignore();

    return end;
}

Telefone *Logica::new_phone()
{

    std::string pais;
    std::string ddd;
    std::string numero;

    // clear_buffer();

    std::cout << "pais: " << std::endl;
    std::getline(std::cin, pais);
    std::cout << "ddd: " << std::endl;
    std::getline(std::cin, ddd);
    std::cout << "numero: " << std::endl;
    std::getline(std::cin, numero);
    return new Telefone(pais, ddd, numero);
}

void Logica::clear_buffer(){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
