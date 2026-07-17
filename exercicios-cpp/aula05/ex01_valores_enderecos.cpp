// Aula 5 - Exercício 1
// Declara e inicializa duas variáveis inteiras e exibe seus
// valores e respectivos endereços de memória.
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 25;

    cout << "Variavel x:" << endl;
    cout << "  Valor   : " << x << endl;
    cout << "  Endereco: " << &x << endl;

    cout << "\nVariavel y:" << endl;
    cout << "  Valor   : " << y << endl;
    cout << "  Endereco: " << &y << endl;

    return 0;
}
