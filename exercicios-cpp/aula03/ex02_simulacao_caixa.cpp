// Aula 3 - Exercício 2: Simulação de Caixa
// Saldo inicial: 1000. Menu com loop + switch + validações.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double saldo = 1000.0;
    int opcao = 0;
    double valor;

    cout << fixed << setprecision(2);

    do {
        cout << "\n===== CAIXA ELETRONICO =====" << endl;
        cout << "1. Ver saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Saldo atual: R$ " << saldo << endl;
                break;

            case 2:
                cout << "Valor do deposito: R$ ";
                cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                    cout << "Deposito realizado! Novo saldo: R$ " << saldo << endl;
                } else {
                    cout << "Valor invalido: o deposito deve ser maior que zero." << endl;
                }
                break;

            case 3:
                cout << "Valor do saque: R$ ";
                cin >> valor;
                if (valor <= 0) {
                    cout << "Valor invalido: o saque deve ser maior que zero." << endl;
                } else if (valor > saldo) {
                    cout << "Saldo insuficiente! Saldo atual: R$ " << saldo << endl;
                } else {
                    saldo -= valor;
                    cout << "Saque realizado! Novo saldo: R$ " << saldo << endl;
                }
                break;

            case 4:
                cout << "Encerrando... Obrigado por usar o caixa!" << endl;
                break;

            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}
