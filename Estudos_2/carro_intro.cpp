#include <iostream>
#include <string>

using namespace std;

class Carro{
    private:
        string modelo;
        string matricula;
        string cor;
        bool motor;
        bool volante;

    public:
        Carro(string modelo, string matricula, string cor){
            this->cor = cor;
            this->modelo = modelo;
            this->matricula = matricula;
        }
        void setModelo(string m){
            modelo = m;
        }
        void setMatricula(string mat){
            matricula = mat;
        }
        void ligarCarro(){
            motor = true;
            cout<< "Motor ligado"<<endl;
        }
        void desligarCarro(){
            motor = false; 
            cout<< "Motor Desligado"<<endl;
        }
        void curvarEsquerda(){
            if (motor == true)
            {   
                volante = true;
                cout<< "Curvar a Esqueda"<<endl;
            } else
            {
                cout<<"Motor Não está ligado"<<endl;
            }
            
        }
        void curvarDireita(){
            if (motor == true)
            {   
                volante = false;
                cout<< "Curvar a Direita"<<endl;
            } else
            {
                cout<<"Motor Não está ligado"<<endl;
            }
        }
};
int main(){
  
    Carro meuHyundai("HB20", "OMX-3760", "Vermelho");

    meuHyundai.ligarCarro();
    meuToyota.curvarEsquerda();


    // cout << meuHyundai.modelo << " " << meuHyundai.cor << " "<< endl;

    return 0;
} 