// Aula 10 - Exercício 1
// Classe base Veiculo e classe derivada Carro (herança pública).
#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;
};

class Carro : public Veiculo {
public:
    int numeroPortas;
};

int main() {
    Carro meuCarro;
    meuCarro.marca = "Toyota";     // atributo herdado de Veiculo
    meuCarro.numeroPortas = 4;     // atributo específico de Carro

    cout << "Marca do carro   : " << meuCarro.marca << endl;
    cout << "Numero de portas : " << meuCarro.numeroPortas << endl;

    return 0;
}
