// Aulas 8 e 9 - Exercício 3
// Classe StringSegura: MOVÍVEL, mas NUNCA copiável.
// Uso das diretivas = default e = delete para controlar
// explicitamente as operações especiais da classe.
#include <iostream>
#include <string>
#include <utility> // std::move
using namespace std;

class StringSegura {
private:
    string conteudo;

public:
    StringSegura(string s = "") : conteudo(std::move(s)) {}

    // ---- CÓPIA: PROIBIDA (= delete) ----
    StringSegura(const StringSegura&) = delete;             // construtor de cópia
    StringSegura& operator=(const StringSegura&) = delete;  // atribuição por cópia

    // ---- MOVIMENTAÇÃO: PERMITIDA (= default) ----
    StringSegura(StringSegura&&) = default;                 // construtor de movimento
    StringSegura& operator=(StringSegura&&) = default;      // atribuição por movimento

    ~StringSegura() = default;

    const string& get() const { return conteudo; }
};

int main() {
    StringSegura s1("Dados confidenciais");
    cout << "s1: \"" << s1.get() << "\"" << endl;

    // MOVIMENTO: permitido. s1 transfere seu conteúdo para s2.
    StringSegura s2 = std::move(s1);
    cout << "\nApos std::move(s1):" << endl;
    cout << "s2: \"" << s2.get() << "\"" << endl;
    cout << "s1: \"" << s1.get() << "\" (esvaziada pelo movimento)" << endl;

    // CÓPIA: as linhas abaixo NAO COMPILAM (operações deletadas):
    // StringSegura s3 = s2;   // erro: construtor de copia deletado
    // s1 = s2;                // erro: atribuicao por copia deletada

    return 0;
}
