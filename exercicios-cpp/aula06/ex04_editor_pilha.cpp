// Aula 6 - Exercício 4
// Editor de texto simulado: cada palavra digitada é empilhada (push).
// A pilha permite "desfazer" a última palavra (pop) - comportamento LIFO.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> pilhaPalavras;
    int opcao;
    string palavra;

    do {
        cout << "\n===== EDITOR DE TEXTO (PILHA) =====" << endl;
        cout << "1. Digitar palavra (push)" << endl;
        cout << "2. Desfazer ultima palavra (pop)" << endl;
        cout << "3. Ver ultima palavra digitada (top)" << endl;
        cout << "4. Total de palavras" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite a palavra: ";
                cin >> palavra;
                pilhaPalavras.push(palavra);
                cout << "\"" << palavra << "\" empilhada." << endl;
                break;
            case 2:
                if (pilhaPalavras.empty()) {
                    cout << "Nada para desfazer: pilha vazia." << endl;
                } else {
                    cout << "Desfazendo: \"" << pilhaPalavras.top() << "\"" << endl;
                    pilhaPalavras.pop();
                }
                break;
            case 3:
                if (pilhaPalavras.empty()) {
                    cout << "Pilha vazia." << endl;
                } else {
                    cout << "Ultima palavra: \"" << pilhaPalavras.top() << "\"" << endl;
                }
                break;
            case 4:
                cout << "Total de palavras na pilha: " << pilhaPalavras.size() << endl;
                break;
            case 5:
                cout << "Encerrando editor..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 5);

    return 0;
}
