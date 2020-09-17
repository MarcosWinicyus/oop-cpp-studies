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
    cout << "Digite 1: Menu de Fornecedor." << endl;
    cout << "Digite 2: Menu de Empregado." << endl;
    cout << "Digite 3: Menu de Cliente." << endl;
    cout << "Digite 0: Sair" << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
}

void Logica::menu_options()
{
    switch (this->option)
    {
    case 1:
        this->menu_fornecedor();
        break;

    case 2:
        this->menu_empregado();
        break;

    case 3:
        this->menu_cliente();
        break;

    default:
        break;
    }
}

// Fornecedor
void Logica::menu_fornecedor()
{
    cout << "-----------------------MENU FORNECEDOR------------------" << endl;
    cout << "Opcao 1: Adicionar um fornecedor" << endl;
    cout << "Opcao 2: Pesquisar um fornecedor - Desabilitado" << endl;
    cout << "Opcao 3: Editar um fornecedor" << endl;
    cout << "Opcao 4: Excluir um fornecedor" << endl;
    cout << "Opcao 5: Listar todos" << endl;

    cout << "Opcao 0: Sair." << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_fornecedor();
}

void Logica::cases_menu_fornecedor()
{
    switch (this->option)
    {
    case 1:
    {
        Fornecedor *f = this->create_fornecedor();
        this->fornecedores.push_back(f);
        break;
    }

    case 5:
    {
        for (vector<Fornecedor *>::iterator it = this->fornecedores.begin(); it != this->fornecedores.end(); it++)
        {
            cout << (*it)->get_nome() << endl;
        }
    }
    case 0:
    {
        this->start();
        break;
    }

    default:
        break;
    }
    this->option = 0;
    this->start();
}

Fornecedor *Logica::create_fornecedor()
{
    Fornecedor *fornecedor = new Fornecedor();

    clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    fornecedor->set_nome(valor);
    valor.clear();

    cout << "Num contrib: " <<endl;
    getline(cin, valor);
    fornecedor->set_num_comtribuinte(valor);
    valor.clear();

    cout << "Idade: " <<endl;
    int idade;
    cin >> idade;
    fornecedor->set_idade(idade);

    cout << "Plafond: " <<endl;
    int plafond;
    cin >> plafond;
    fornecedor->set_plafond(plafond);

    cout << "Valor divida: " <<endl;
    int v_d;
    cin >> v_d;
    fornecedor->set_valor_divida(v_d);

    return fornecedor;
}


// Cliente

void Logica::menu_cliente()
{
    cout << "-----------------------MENU CLIENTE-----------------------------" <<endl;
    cout << "Opcao 1: Adicionar um novo cliente" <<endl;
    cout << "Opcao 2: Procurar um cliente" <<endl;
    cout << "Opcao 3: Editar um cliente" <<endl;
    cout << "Opcao 4: Deletar um cliente" <<endl;
    cout << "Opcao 4: Deletar um cliente" <<endl;
    cout << "Opcao 5: Listar todos" <<endl;
    cout << "Opcao 0: Sair" <<endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_cliente();
}

void Logica::cases_menu_cliente()
{
    switch (this->option)
    {
    case 1:
    {
        Cliente *c = this->create_cliente();
        this->clientes.push_back(c);
        break;
    }

    case 5:
    {
        for (vector<Cliente *>::iterator it = this->clientes.begin(); it != this->clientes.end(); it++)
        {
           cout << (*it)->get_nome() <<endl;
        }
    }
    case 0:
    {
        this->start();
        break;
    }

    default:
        break;
    }
    this->option = 0;
    this->start();
}

Cliente *Logica::create_cliente()
{
    Cliente *cliente = new Cliente();

    clear_buffer();
    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    cliente->set_nome(valor);
    valor.clear();

    cout << "Num contrib: " <<endl;
    getline(cin, valor);
    cliente->set_num_comtribuinte(valor);
    valor.clear();

    cout << "Idade: " <<endl;
    int idade;
    cin >> idade;
    cliente->set_idade(idade);

    cout << "Plafond: " <<endl;
    int plafond;
    cin >> plafond;
    cliente->set_plafond(plafond);

    cout << "Valor divida: " <<endl;
    int v_d;
    cin >> v_d;
    cliente->set_valor_divida(v_d);

    return cliente;
}

//  Empregados
void Logica::menu_empregado(){
    do
    {
        this->initital_menu_empregado();
        this->menu_options_empregado();
    } while (this->option > 0);

    if (option == 0)
    {
        this->start();
    }
    
}

void Logica::initital_menu_empregado()
{
    cout << "-----------------MENU TIPOS DE EMPREGADO-----------------" << endl;
    cout << "Digite 1: Menu de Administrador." << endl;
    cout << "Digite 2: Menu de Operario." << endl;
    cout << "Digite 3: Menu de Vendedor." << endl;
    cout << "Digite 0: Sair" << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
}

void Logica::menu_options_empregado()
{
    switch (this->option)
    {
    case 1:{
        this->menu_administrador();
        break;
    }
    case 2:{
        this->menu_operario();
        break;
    }
    case 3:{
        this->menu_vendedor();
        break;
    }
        
    case 0:{
        this->start();
        break;
    }

    default:
        break;
    }
    this->start();
}

// Administrador
void Logica::menu_administrador()
{
    cout << "-----------------------MENU ADMINISTRADOR------------------" << endl;
    cout << "Opcao 1: Adicionar um administrador" << endl;
    cout << "Opcao 2: Pesquisar um administrador - Desabilitado" << endl;
    cout << "Opcao 3: Editar um administrador" << endl;
    cout << "Opcao 4: Excluir um administrador" << endl;
    cout << "Opcao 5: Listar todos" << endl;

    cout << "Opcao 0: Sair." << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_administrador();
}

void Logica::cases_menu_administrador()
{
    switch (this->option)
    {
    case 1:
    {
        Administrador *a = this->create_administrador();
        this->administradores.push_back(a);
        break;
    }

    case 5:
    {
        for (vector<Administrador *>::iterator it = this->administradores.begin(); it != this->administradores.end(); it++)
        {
            cout << (*it)->get_nome() << endl;
        }
    }
    case 0:
    {
        this->menu_empregado();
        break;
    }

    default:
        break;
    }
    this->option = 0;
    this->menu_empregado();
    
}

Administrador *Logica::create_administrador()
{
    Administrador *administrador = new Administrador();

    clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    administrador->set_nome(valor);
    valor.clear();

    cout << "Num contrib: " <<endl;
    getline(cin, valor);
    administrador->set_num_comtribuinte(valor);
    valor.clear();

    cout << "Idade: " <<endl;
    int idade;
    cin >> idade;
    administrador->set_idade(idade);

    cout << "Ajuda custo: " <<endl;
    int ajuda;
    cin >> ajuda;
    administrador->set_ajuda_custo(ajuda);

    return administrador;
}

// Operario
void Logica::menu_operario()
{
    cout << "-----------------------MENU OPERSRIO------------------" << endl;
    cout << "Opcao 1: Adicionar um operario" << endl;
    cout << "Opcao 2: Pesquisar um operario - Desabilitado" << endl;
    cout << "Opcao 3: Editar um operario" << endl;
    cout << "Opcao 4: Excluir um operario" << endl;
    cout << "Opcao 5: Listar todos" << endl;

    cout << "Opcao 0: Sair." << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_operario();
}

void Logica::cases_menu_operario()
{
    switch (this->option)
    {
    case 1:
    {
        Operario *o = this->create_operario();
        this->operarios.push_back(o);
        break;
    }

    case 5:
    {
        for (vector<Operario *>::iterator it = this->operarios.begin(); it != this->operarios.end(); it++)
        {
            cout << (*it)->get_nome() << endl;
        }
    }
    case 0:
    {
        this->menu_empregado();
        break;
    }

    default:
        break;
    }
    this->option = 0;
    this->menu_empregado();
}

Operario *Logica::create_operario()
{
    Operario *operario = new Operario();

    clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    operario->set_nome(valor);
    valor.clear();

    cout << "Num contrib: " <<endl;
    getline(cin, valor);
    operario->set_num_comtribuinte(valor);
    valor.clear();

    cout << "Idade: " <<endl;
    int idade;
    cin >> idade;
    operario->set_idade(idade);

    cout << "Valor producao: " <<endl;
    double prod;
    cin >> prod;
    operario->set_valor_producao(prod);

    cout << "Comissao: " <<endl;
    double comi;
    cin >> comi;
    operario->set_comicao(comi);

    return operario;
}

// Vendedor
void Logica::menu_vendedor()
{
    cout << "-----------------------MENU VENDEDOR------------------" << endl;
    cout << "Opcao 1: Adicionar um vendedor" << endl;
    cout << "Opcao 2: Pesquisar um vendedor - Desabilitado" << endl;
    cout << "Opcao 3: Editar um vendedor" << endl;
    cout << "Opcao 4: Excluir um vendedor" << endl;
    cout << "Opcao 5: Listar todos" << endl;

    cout << "Opcao 0: Sair." << endl;
    cout << "Informe uma opcao: ";
    cin >> this->option;
    this->cases_menu_vendedor();
}

void Logica::cases_menu_vendedor()
{
    switch (this->option)
    {
    case 1:
    {
        Vendedor *o = this->create_vendedor();
        this->vendedores.push_back(o);
        break;
    }

    case 5:
    {
        for (vector<Vendedor *>::iterator it = this->vendedores.begin(); it != this->vendedores.end(); it++)
        {
            cout << (*it)->get_nome() << endl;
        }
    }
    case 0:
    {
        this->menu_empregado();
        break;
    }

    default:
        break;
    }
    this->option = 0;
    this->menu_empregado();
}

Vendedor *Logica::create_vendedor()
{
    Vendedor *vendedor = new Vendedor(this->create_carro());

    clear_buffer();

    string valor;
    cout << "Nome: " <<endl;
    getline(cin, valor);
    vendedor->set_nome(valor);
    valor.clear();

    cout << "Num contrib: " <<endl;
    getline(cin, valor);
    vendedor->set_num_comtribuinte(valor);
    valor.clear();

    cout << "Idade: " <<endl;
    int idade;
    cin >> idade;
    vendedor->set_idade(idade);

    cout << "Valor vendas: " <<endl;
    double prod;
    cin >> prod;
    vendedor->set_valor_venda(prod);

    cout << "Comissao: " <<endl;
    double comi;
    cin >> comi;
    vendedor->set_comicao(comi);

    return vendedor;
}

Carro *Logica::create_carro()
{
    string valor;
    Carro *carro = new Carro();

    clear_buffer();

    cout << "Placa: " << endl;
    getline(cin, valor);
    carro->set_placa(valor);
    valor.clear();

    cout << "Fabricante: " << endl;
    getline(cin, valor);
    carro->set_fabricante(valor);
    valor.clear();

    cout << "Quantidade Toneladas: " << endl;
    double numero;
    cin >> numero;
    carro->set_qtd_toneladas(numero);

    cout << "Ano: " << endl;
    int ano;
    cin >> ano;
    carro->set_qtd_toneladas(ano);
    cin.ignore();

    return carro;
}


void Logica::clear_buffer(){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
