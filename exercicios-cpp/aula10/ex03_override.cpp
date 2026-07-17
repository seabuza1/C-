// Aula 10 - Exercício 3
// Sobrescrita (override) do método virtual emitirSom() na classe Carro.
// Demonstra polimorfismo: um ponteiro de Veiculo chama a versão de Carro.
#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;

    virtual void emitirSom() {
        cout << "O motor do veiculo faz um ruido generico: vrummm..." << endl;
    }

    virtual ~Veiculo() = default;
};

class Carro : public Veiculo {
public:
    int numeroPortas;

    // override garante em tempo de compilação que estamos
    // realmente sobrescrevendo uma função virtual da base
    void emitirSom() override {
        cout << "O carro buzina: BI BI! FON FON!" << endl;
    }
};

int main() {
    Veiculo v;
    v.marca = "Generica";

    Carro c;
    c.marca = "Honda";
    c.numeroPortas = 4;

    cout << "--- Chamadas diretas ---" << endl;
    v.emitirSom(); // versão da base
    c.emitirSom(); // versão sobrescrita

    cout << "\n--- Polimorfismo (ponteiro da base) ---" << endl;
    Veiculo *ptr = &c;
    ptr->emitirSom(); // graças ao virtual, chama a versão de Carro

    return 0;
}
