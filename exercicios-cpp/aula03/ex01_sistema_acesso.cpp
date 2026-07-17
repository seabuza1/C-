// Aula 3 - Exercício 1: Sistema de Validação com Regras Encadeadas
// Regras:
//   < 16          -> acesso negado
//   16-17         -> precisa de autorização (0/1)
//   >= 18         -> acesso liberado conforme nível (switch)
//   nível inválido-> erro
#include <iostream>
using namespace std;

int main() {
    int idade, autorizacao, nivel;

    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Possui autorizacao? (0 = nao, 1 = sim): ";
    cin >> autorizacao;
    cout << "Digite o nivel de acesso (1 a 3): ";
    cin >> nivel;

    cout << endl;

    if (idade < 16) {
        cout << "Acesso negado: idade minima nao atingida." << endl;
    } else if (idade >= 16 && idade < 18) {
        if (autorizacao == 1) {
            cout << "Acesso liberado mediante autorizacao (menor de idade)." << endl;
        } else {
            cout << "Acesso negado: menor de idade sem autorizacao." << endl;
        }
    } else { // idade >= 18
        switch (nivel) {
            case 1:
                cout << "Acesso liberado: nivel BASICO." << endl;
                break;
            case 2:
                cout << "Acesso liberado: nivel INTERMEDIARIO." << endl;
                break;
            case 3:
                cout << "Acesso liberado: nivel TOTAL." << endl;
                break;
            default:
                cout << "Erro: nivel de acesso invalido!" << endl;
        }
    }

    return 0;
}
