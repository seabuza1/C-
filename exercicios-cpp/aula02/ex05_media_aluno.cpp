// Aula 2 - Exercício 5
// Lê nome, idade e três notas de um aluno; calcula e exibe a média formatada.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double n1, n2, n3;

    cout << "Digite o nome completo do aluno: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a 1a nota: ";
    cin >> n1;
    cout << "Digite a 2a nota: ";
    cin >> n2;
    cout << "Digite a 3a nota: ";
    cin >> n3;

    double media = (n1 + n2 + n3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "\n===== BOLETIM DO ALUNO =====" << endl;
    cout << "Nome : " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Notas: " << n1 << " | " << n2 << " | " << n3 << endl;
    cout << "Media: " << media << endl;

    return 0;
}
