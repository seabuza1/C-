// Aula 2 - Exercício 4
// Lê nome e salário, exibindo o salário com duas casas decimais e alinhamento.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double salario;

    cout << "Digite o nome da pessoa: ";
    getline(cin, nome);

    cout << "Digite o salario (R$): ";
    cin >> salario;

    cout << fixed << setprecision(2);
    cout << "\n========== FOLHA ==========" << endl;
    cout << left  << setw(10) << "Nome:"    << nome << endl;
    cout << left  << setw(10) << "Salario:" << "R$ "
         << right << setw(10) << salario << endl;

    return 0;
}
