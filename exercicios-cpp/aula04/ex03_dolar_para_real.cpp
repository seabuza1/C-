// Aula 4 - Exercício 3
// Converte dólares em reais usando uma função inline.
#include <iostream>
#include <iomanip>
using namespace std;

const double COTACAO = 5.50; // cotação do dólar (exemplo)

inline double converterParaReais(double dolares) {
    return dolares * COTACAO;
}

int main() {
    double dolares;

    cout << "Digite a quantia em dolares (US$): ";
    cin >> dolares;

    double reais = converterParaReais(dolares);

    cout << fixed << setprecision(2);
    cout << "US$ " << dolares << " = R$ " << reais
         << " (cotacao: R$ " << COTACAO << ")" << endl;

    return 0;
}
