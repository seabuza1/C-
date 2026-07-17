// Aula 6 - Exercício 1
// Refatoração: substituir new/delete por std::make_unique.
//
// VERSÃO ANTIGA (gerenciamento manual, sujeita a vazamentos):
//   int *ptr = new int(42);
//   cout << *ptr;
//   delete ptr;
//
// VERSÃO REFATORADA (smart pointer, liberação automática):
#include <iostream>
#include <memory>
using namespace std;

int main() {
    // make_unique aloca no heap e devolve um unique_ptr,
    // que libera a memória automaticamente ao sair de escopo.
    auto ptr = make_unique<int>(42);

    cout << "Valor apontado: " << *ptr << endl;

    *ptr = 100;
    cout << "Novo valor    : " << *ptr << endl;

    // Nenhum delete necessário: o destrutor do unique_ptr cuida disso.
    return 0;
}
