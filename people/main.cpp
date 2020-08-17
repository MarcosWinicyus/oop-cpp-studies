#include <iostream>
#include "pessoa.hpp"

using namespace std;

int main() {
    Pessoa p;
    Pessoa p2(21, "Leiliane");

    p.setNome("Marcos");
    cout << p.getNome() << endl;

    
    cout << p2.getIdade() << " " << p2.getNome() << endl;

   return 0;
}