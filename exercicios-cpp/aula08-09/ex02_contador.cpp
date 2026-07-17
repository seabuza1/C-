// Aulas 8 e 9 - Exercício 2
// Classe Contador com sobrecarga dos operadores ++ pré e pós-fixado.
//
// DIFERENÇAS ESSENCIAIS:
//   Pré-fixado : Contador& operator++()      -> incrementa e retorna
//                REFERÊNCIA ao próprio objeto (mais eficiente).
//   Pós-fixado : Contador operator++(int)    -> o parâmetro int fictício
//                é só para diferenciar a assinatura; retorna uma CÓPIA
//                do estado ANTERIOR ao incremento (por valor).
#include <iostream>
using namespace std;

class Contador {
private:
    int valor;

public:
    Contador(int v = 0) : valor(v >= 0 ? v : 0) {}

    int getValor() const { return valor; }

    // PRÉ-FIXADO (++c): incrementa primeiro, retorna o objeto atualizado
    Contador& operator++() {
        ++valor;
        return *this; // retorna referência: sem cópia
    }

    // PÓS-FIXADO (c++): salva o estado antigo, incrementa, retorna o antigo
    Contador operator++(int) {
        Contador temp = *this; // cópia do estado anterior
        ++valor;
        return temp;           // retorna por VALOR (a cópia)
    }
};

int main() {
    Contador c(5);
    cout << "Valor inicial: " << c.getValor() << endl;

    // Pré-fixado: o resultado da expressão já é o valor incrementado
    Contador pre = ++c;
    cout << "\nApos ++c:" << endl;
    cout << "  Resultado da expressao: " << pre.getValor() << " (ja incrementado)" << endl;
    cout << "  Contador c            : " << c.getValor() << endl;

    // Pós-fixado: o resultado da expressão é o valor ANTES do incremento
    Contador pos = c++;
    cout << "\nApos c++:" << endl;
    cout << "  Resultado da expressao: " << pos.getValor() << " (valor anterior)" << endl;
    cout << "  Contador c            : " << c.getValor() << endl;

    return 0;
}
