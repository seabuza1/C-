// Aula 6 - Exercício 3
// Fila de impressão: documentos entram em uma std::queue (FIFO).
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> filaImpressao;
    int opcao;
    string doc;

    do {
        cout << "\n===== FILA DE DOCUMENTOS =====" << endl;
        cout << "1. Enviar documento para a fila" << endl;
        cout << "2. Imprimir proximo documento" << endl;
        cout << "3. Ver documentos na fila" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore(); // limpa o '\n' para o getline

        switch (opcao) {
            case 1:
                cout << "Nome do documento: ";
                getline(cin, doc);
                filaImpressao.push(doc);
                cout << "\"" << doc << "\" entrou na fila." << endl;
                break;
            case 2:
                if (filaImpressao.empty()) {
                    cout << "Fila vazia: nada para imprimir." << endl;
                } else {
                    cout << "Imprimindo: \"" << filaImpressao.front() << "\"" << endl;
                    filaImpressao.pop();
                }
                break;
            case 3:
                cout << "Documentos aguardando: " << filaImpressao.size() << endl;
                if (!filaImpressao.empty()) {
                    cout << "Proximo da fila: \"" << filaImpressao.front() << "\"" << endl;
                }
                break;
            case 4:
                cout << "Encerrando..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 4);

    return 0;
}
