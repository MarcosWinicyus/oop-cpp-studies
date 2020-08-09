#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>

using namespace std;
class Veiculo
{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();

private:
    int tipo; //1=moto, 2=Carro, 3=Caminhão, 4=Tanque
    int velMax;
    bool arma;
};

void Veiculo::imp(){
    cout << "Tipo Veiculo......: " << tipo << endl;
    cout << "Velocidade Maxima.: " << velMax << endl;
    cout << "Quantiade de rodas: " << rodas << endl;
    cout << "Blindagem.........: " << blind << endl;
    cout << "Armamento.........: " << arma << endl;
    cout << "======================================================" << arma << endl;

}

void Veiculo::setTipo(int tp)
{
    tipo = tp;
}
void Veiculo::setVelMax(int vm)
{
    velMax = vm;
}
void Veiculo::setArma(bool ar)
{
    arma = ar;
}

class Moto : public Veiculo
{
    public:
        Moto();
};

Moto::Moto()
{
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(300);
    setArma(true);
}

class Carro : public Veiculo
{
    public:
        Carro();
};

Carro::Carro()
{
    vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(450);
    setArma(true);
}

class Caca_jato : public Veiculo
{
    public:
        Caca_jato();
};

Caca_jato::Caca_jato()
{
    vel = 100;
    blind = 0;
    rodas = 4;
    setTipo(3);
    setVelMax(2000);
    setArma(true);
}
#endif