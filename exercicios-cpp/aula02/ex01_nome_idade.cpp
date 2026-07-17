// Aula 2 - Exercício 1
// Lê nome completo e idade, exibindo de forma organizada.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "\n===== DADOS DO USUARIO =====" << endl;
    cout << "Nome : " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;

    return 0;
}
