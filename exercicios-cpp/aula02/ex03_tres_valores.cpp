// Aula 2 - Exercício 3
// Lê três valores numéricos e exibe na mesma ordem digitada.
#include <iostream>
using namespace std;

int main() {
    double v1, v2, v3;

    cout << "Digite o primeiro valor : ";
    cin >> v1;
    cout << "Digite o segundo valor  : ";
    cin >> v2;
    cout << "Digite o terceiro valor : ";
    cin >> v3;

    cout << "\nValores digitados (na ordem):" << endl;
    cout << "1) " << v1 << endl;
    cout << "2) " << v2 << endl;
    cout << "3) " << v3 << endl;

    return 0;
}
