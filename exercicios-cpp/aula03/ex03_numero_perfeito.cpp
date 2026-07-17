// Aula 3 - Exercício 3: Número Perfeito
// Um número é perfeito quando a soma de seus divisores (exceto ele mesmo)
// é igual ao próprio número. Ex.: 6 -> 1 + 2 + 3 = 6.
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Entrada invalida: digite um numero positivo." << endl;
        return 1;
    }

    int soma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma += i;
        }
        if (soma > numero) {  // parada antecipada: já ultrapassou
            break;
        }
    }

    if (soma == numero) {
        cout << "Numero perfeito" << endl;
    } else {
        cout << "Nao e perfeito" << endl;
    }

    return 0;
}
