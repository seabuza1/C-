// Aula 7 - Exercício 2
// Classe ContaBancaria: saldo só é modificado via depositar/sacar.
#include <iostream>
#include <iomanip>
using namespace std;

class ContaBancaria {
private:
    int numeroConta;
    double saldo;

public:
    ContaBancaria(int numero) : numeroConta(numero), saldo(0.0) {}

    // Apenas getter para o saldo (sem setter!)
    double getSaldo() const {
        return saldo;
    }

    int getNumeroConta() const {
        return numeroConta;
    }

    bool depositar(double valor) {
        if (valor <= 0) {
            cout << "[ERRO] Deposito deve ser maior que zero." << endl;
            return false;
        }
        saldo += valor;
        cout << "Deposito de R$ " << valor << " realizado." << endl;
        return true;
    }

    bool sacar(double valor) {
        if (valor <= 0) {
            cout << "[ERRO] Saque deve ser maior que zero." << endl;
            return false;
        }
        if (valor > saldo) {
            cout << "[ERRO] Saldo insuficiente." << endl;
            return false;
        }
        saldo -= valor;
        cout << "Saque de R$ " << valor << " realizado." << endl;
        return true;
    }
};

int main() {
    cout << fixed << setprecision(2);

    ContaBancaria conta(12345);
    cout << "Conta " << conta.getNumeroConta()
         << " criada. Saldo inicial: R$ " << conta.getSaldo() << endl;

    conta.depositar(500.00);
    conta.sacar(120.50);
    conta.sacar(1000.00);   // deve falhar: saldo insuficiente
    conta.depositar(-50);   // deve falhar: valor inválido

    cout << "\nSaldo final: R$ " << conta.getSaldo() << endl;

    return 0;
}
