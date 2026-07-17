// Aula 2 - Exercício 2
// Lê nome completo, idade e altura, armazenando cada tipo corretamente.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double altura;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    cout << "\n===== FICHA DA PESSOA =====" << endl;
    cout << "Nome  : " << nome << endl;
    cout << "Idade : " << idade << " anos" << endl;
    cout << "Altura: " << altura << " m" << endl;

    return 0;
}
