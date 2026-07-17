// Aula 6 - Exercício 2
// std::list com inserção no início/fim, remoção por valor e tamanho.
#include <iostream>
#include <list>
using namespace std;

void exibirLista(const list<int>& l) {
    cout << "Lista atual: ";
    for (int item : l) {
        cout << item << " ";
    }
    cout << "(tamanho: " << l.size() << ")" << endl;
}

int main() {
    list<int> lista;
    int opcao, valor;

    do {
        cout << "\n===== GERENCIADOR DE LISTA =====" << endl;
        cout << "1. Inserir no inicio (push_front)" << endl;
        cout << "2. Inserir no final (push_back)" << endl;
        cout << "3. Remover por valor (remove)" << endl;
        cout << "4. Exibir tamanho (size)" << endl;
        cout << "5. Exibir lista" << endl;
        cout << "6. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor a inserir no inicio: ";
                cin >> valor;
                lista.push_front(valor);
                exibirLista(lista);
                break;
            case 2:
                cout << "Valor a inserir no final: ";
                cin >> valor;
                lista.push_back(valor);
                exibirLista(lista);
                break;
            case 3:
                cout << "Valor a remover: ";
                cin >> valor;
                lista.remove(valor); // remove todas as ocorrências
                exibirLista(lista);
                break;
            case 4:
                cout << "Tamanho total da lista: " << lista.size() << endl;
                break;
            case 5:
                exibirLista(lista);
                break;
            case 6:
                cout << "Encerrando..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 6);

    return 0;
}
