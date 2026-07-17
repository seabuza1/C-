// Aula 5 - Exercício 2
// Array de double (até 100 valores) lido com *(a + j)
// e acumulado com *(aPtr + j). Exibe soma e média.
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;

int main() {
    double a[MAX];
    double *aPtr = a;   // ponteiro para o início do array
    int n;

    cout << "Quantos valores deseja digitar (1 a " << MAX << ")? ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    // Leitura usando aritmética de ponteiros: *(a + j) equivale a a[j]
    for (int j = 0; j < n; j++) {
        cout << "Digite o valor " << (j + 1) << ": ";
        cin >> *(a + j); // usando *(a+j) para armazenar em a[j]
    }

    // Acumulação usando o ponteiro aPtr
    double soma = 0.0;
    for (int j = 0; j < n; j++) {
        soma += *(aPtr + j); // usando *aPtr para acessar a[j]
    }

    double media = soma / n;

    cout << fixed << setprecision(2);
    cout << "\nSoma : " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}
