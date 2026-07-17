// Aula 4 - Exercício 2
// Lê dois inteiros e chama a função soma passando-os como parâmetros.
#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> x;
    cout << "Digite o segundo valor inteiro: ";
    cin >> y;

    int resultado = soma(x, y);

    cout << "Soma: " << x << " + " << y << " = " << resultado << endl;

    return 0;
}
