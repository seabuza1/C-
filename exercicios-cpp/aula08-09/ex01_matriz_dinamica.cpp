// Aulas 8 e 9 - Exercício 1
// Classe MatrizDinamica: alocação no heap, destrutor preventivo
// de vazamentos e construtor de cópia com CÓPIA PROFUNDA.
#include <iostream>
using namespace std;

class MatrizDinamica {
private:
    int linhas;
    int colunas;
    int **dados; // matriz alocada no heap

public:
    // Construtor parametrizado: aloca a matriz no heap
    MatrizDinamica(int l, int c) : linhas(l), colunas(c) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++) {
                dados[i][j] = 0;
            }
        }
        cout << "[Construtor] Matriz " << linhas << "x" << colunas
             << " alocada no heap." << endl;
    }

    // Construtor de CÓPIA: cópia profunda obrigatória.
    // Sem ele, a cópia rasa faria dois objetos apontarem para a
    // mesma memória -> double free na destruição.
    MatrizDinamica(const MatrizDinamica &outra)
        : linhas(outra.linhas), colunas(outra.colunas) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++) {
                dados[i][j] = outra.dados[i][j]; // copia os VALORES
            }
        }
        cout << "[Construtor de copia] Copia profunda realizada." << endl;
    }

    // Destrutor: libera toda a memória alocada (previne vazamentos)
    ~MatrizDinamica() {
        for (int i = 0; i < linhas; i++) {
            delete[] dados[i];
        }
        delete[] dados;
        cout << "[Destrutor] Memoria da matriz liberada." << endl;
    }

    void setValor(int i, int j, int valor) {
        if (i >= 0 && i < linhas && j >= 0 && j < colunas) {
            dados[i][j] = valor;
        }
    }

    void exibir(const string& titulo) const {
        cout << titulo << ":" << endl;
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << dados[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrizDinamica m1(2, 3);
    m1.setValor(0, 0, 10);
    m1.setValor(1, 2, 99);
    m1.exibir("Matriz original (m1)");

    // Aciona o construtor de cópia (cópia profunda)
    MatrizDinamica m2 = m1;
    m2.setValor(0, 0, 777); // alterar m2 NAO afeta m1

    cout << endl;
    m1.exibir("m1 apos alterar m2 (inalterada)");
    m2.exibir("m2 (copia modificada)");

    cout << endl;
    return 0; // destrutores liberam as duas matrizes separadamente
}
