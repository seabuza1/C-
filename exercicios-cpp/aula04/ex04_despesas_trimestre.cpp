// Aula 4 - Exercício 4
// Array bidimensional despesas[ANO][TRIMESTRE] com entrada de dados
// e exibição em tabela, incluindo o total geral.
#include <iostream>
#include <iomanip>
using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];

    // Entrada dos dados
    for (int a = 0; a < ANO; a++) {
        cout << "\n--- Ano " << (a + 1) << " ---" << endl;
        for (int t = 0; t < TRIMESTRE; t++) {
            cout << "Despesa do trimestre " << (t + 1) << ": R$ ";
            cin >> despesas[a][t];
        }
    }

    // Exibição da tabela
    cout << fixed << setprecision(2);
    cout << "\n================ TABELA DE DESPESAS ================" << endl;
    cout << left << setw(8) << "Ano";
    for (int t = 0; t < TRIMESTRE; t++) {
        cout << right << setw(11) << ("Trim " + to_string(t + 1));
    }
    cout << endl;

    double totalGeral = 0.0;
    for (int a = 0; a < ANO; a++) {
        cout << left << setw(8) << (a + 1);
        for (int t = 0; t < TRIMESTRE; t++) {
            cout << right << setw(11) << despesas[a][t];
            totalGeral += despesas[a][t];
        }
        cout << endl;
    }

    cout << "----------------------------------------------------" << endl;
    cout << "Total de despesas nos dois anos: R$ " << totalGeral << endl;

    return 0;
}
