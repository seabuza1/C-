// Aula 10 - Exercício 2
// Função virtual emitirSom() na classe base Veiculo.
#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;

    // virtual: permite que classes derivadas sobrescrevam o comportamento
    virtual void emitirSom() {
        cout << "O motor do veiculo faz um ruido generico: vrummm..." << endl;
    }

    virtual ~Veiculo() = default; // boa prática com funções virtuais
};

int main() {
    Veiculo v;
    v.marca = "Generica";

    cout << "Veiculo da marca " << v.marca << ":" << endl;
    v.emitirSom();

    return 0;
}
