// Aula 7 - Exercício 1
// Classe Gato com atributos privados e setter que valida o peso.
#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;

public:
    // Construtor inicializa todos os dados
    Gato(string nome, int idade, double peso) {
        this->nome = nome;
        this->idade = idade;
        setPeso(peso); // reaproveita a validação do setter
        if (this->peso <= 0) {
            this->peso = 0.1; // valor mínimo de segurança
        }
    }

    // Setter com validação: impede peso <= 0
    void setPeso(double novoPeso) {
        if (novoPeso > 0) {
            peso = novoPeso;
        } else {
            cout << "[ERRO] Peso invalido (" << novoPeso
                 << "). O peso deve ser maior que zero." << endl;
        }
    }

    string getNome() const { return nome; }
    int getIdade() const { return idade; }
    double getPeso() const { return peso; }

    void exibir() const {
        cout << "Gato: " << nome << " | Idade: " << idade
             << " anos | Peso: " << peso << " kg" << endl;
    }
};

int main() {
    Gato g("Mingau", 3, 4.2);
    g.exibir();

    cout << "\nTentando definir peso = -5..." << endl;
    g.setPeso(-5);   // deve ser bloqueado
    g.exibir();

    cout << "\nDefinindo peso = 4.8..." << endl;
    g.setPeso(4.8);  // válido
    g.exibir();

    return 0;
}
