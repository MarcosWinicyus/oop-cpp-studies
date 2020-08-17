#include <iostream>
#include <string>
#include <algorithm>
#include <vector> 

using namespace std;

class Motocicleta{
    private:
        string marca;
        string cor;
        int vel_max;
        int qtd_marcha;
        int qtd_cilindradas;
        float preco_compra;
        float preco_venda;
        float porcento_lucro;
        int ano_fabric;
        string chassi;
        string categoria;
        int peso;
        string placa;
        string ultimo_dono;

    public:
        Motocicleta(string marca, string cor, int vel_max, int qtd_marcha, int qtd_cilindradas, float preco_compra, float preco_venda, int ano_fabric, string chassi, int categoria, int peso, string placa, string ultimo_dono){
            this->marca = marca;
            this->cor = cor;
            this->vel_max = vel_max;
            this->qtd_marcha = qtd_marcha;
            this->qtd_cilindradas = qtd_cilindradas;
            this->preco_compra = preco_compra;
            this->preco_venda = preco_venda;
            this->ano_fabric = ano_fabric;
            this->chassi = chassi;
            this->peso = peso;
            this->placa = placa;
            this->ultimo_dono = ultimo_dono;

            if (categoria == 1)
            {
                this->categoria = "Esportiva";
            }
            else if (categoria == 2)
            {
                this->categoria = "Scooter";
            }
            else if (categoria == 3){
                this->categoria = "Naket";
            }
            else if (categoria == 4){
                this->categoria = "Maxitrail";
            }
            else if (categoria == 5){
                this->categoria = "Trail";
            }
            else if (categoria == 6){
                this->categoria = "Street";
            }
             else if (categoria == 7){
                this->categoria = "Touring";
            }
            else
            {
                this->categoria = "Valor incerido invalido";
            }
            
            this->porcento_lucro = ((preco_venda * 100)/ preco_compra)-100;

        }
        // friend ostream& operator<<(ostream& saida, Motocicleta& moto){
        //     saida << "Marca: "<< moto.marca <<endl;
        //     saida << "Cor: "<< moto.cor <<endl;
        //     saida << "Velocidade Maxima: "<< moto.vel_max <<endl;
        //     saida << "Quantidade de Marchas: "<< moto.qtd_marcha <<endl;
        //     saida << "Quantidade de cilindradas: "<< moto.qtd_cilindradas <<endl;
        //     saida << "Preco compra: "<< moto.preco_compra <<endl;
        //     saida << "Preco venda: "<< moto.preco_venda <<endl;
        //     saida << "Ano fabricao: "<< moto.ano_fabric <<endl;
        //     saida << "Chassi: "<< moto.chassi <<endl;
        //     saida << "Categoria: "<< moto.categoria <<endl;
        //     saida << "Peso: "<< moto.peso <<endl;
        //     saida << "Placa: "<< moto.placa <<endl;
        //     saida << "Nome do ultimo dono: "<< moto.ultimo_dono <<endl;

        //     return saida;
        // }

};
class ManipularMotos{
    public:
        static vector<Motocicleta> listaMotos;
        void cadastroMotos(){
            string marca, cor, chassi, placa, ultimo_dono;
            int vel_max, qtd_marcha, qtd_cilindradas, ano_fabric, peso, categoria;
            float preco_compra, preco_venda;
            cout << "================================"<<endl;
            cout << endl;
            cout << "Pagina de Cadastro de Motocicletas"<<endl;
            cout << endl;
            cout << "================================"<<endl;
            cout << endl;
            cout << endl;
            cout << "Digite a Marca: ";
            cin>>marca;
            cout << "Digite a Cor: ";
            cin>>cor;
            cout << "Digite a Velocidade Maxima: ";
            cin>>vel_max;
            cout << "Digite a quantidade de marchas: ";
            cin>>qtd_marcha;
            cout << "Digite a quantidade de cilindradas: ";
            cin>>qtd_cilindradas;
            cout << "Digite o preco de compra: ";
            cin>>preco_compra;
            cout << "Digite o preco de venda: ";
            cin>>preco_venda;
            cout << "Digite o ano de fabricacao: ";
            cin>>ano_fabric;
            cout << "Digite o chassi: ";
            cin>>chassi;
            cout << "Digite a categoria: ";
            cin>>categoria;
            cout << "Digite o peso: ";
            cin>>peso;
            cout << "Digite a placa: ";
            cin>>placa;
            cout << "Digite o Nome do ultimo dono: ";
            cin>>ultimo_dono;
            cout << endl;
            cout << "================================"<<endl;
            cout << endl;

            Motocicleta novaMoto(marca,cor,vel_max,qtd_marcha, qtd_cilindradas,preco_compra,preco_venda,ano_fabric,chassi,categoria,peso,placa, ultimo_dono);
            listaMotos.push_back(novaMoto);
            cout << "Cadastro Finalizado com sucesso!"<<endl;

        }
        void imprimirListaMotos(){
            for(Motocicleta moto : listaMotos){
                cout << moto <<endl;
            }
        }
        void pesquisaCategoria(){
            // for(Motocicleta moto ; listaMotos){
            //     // cout << moto <<endl;
            // }
        }
        void pesquisaChassi(){
            // for(Motocicleta moto ; listaMotos){
            //     // cout << moto <<endl;
            // }
        }
        void pesquisaPlaca(){
            // for(Motocicleta moto ; listaMotos){
            //     // cout << moto <<endl;
            // }
        }
};

vector<Motocicleta> ManipularMotos::listaMotos;

int main(){  

    // Motocicleta moto1("Honda","Vermelha",300,6,1000,30000.00,45000.00,2019,"128931aksdj",1,155,"omx-3670","Rafael mendonca" );
    

    // char opcao;
    // char opcaoFazer;
    // ManipularMotos pagCadastro;

    // do
    // {
    //     cout <<"O que deseja fazer? c = (Cadastrar)"<<endl;
    //     cin>>opcaoFazer;
    //     if (opcaofazer == "i")
    //     {
    //         pagCadastro.cadastroMotos();
    //     }
    //     if (opcaofazer == "l")
    //     {
    //         pagCadastro.imprimirListaMotos();
    //     }
        
        
    // } while (opcao == 'i');
    
    

    // cadastro1.cadastroMotos();

    return 0;
} 