# Exercícios de Programação em C++

Repositório com os exercícios resolvidos das aulas 2 a 10 da disciplina de Programação.

## Estrutura

| Pasta | Conteúdo |
|---|---|
| `aula02/` | Entrada e saída (`cin`, `getline`, `cout`), tipos de dados e formatação (`iomanip`) |
| `aula03/` | Condicionais (`if`/`else`, `switch`), operadores lógicos e loops |
| `aula04/` | Funções, funções `inline` e arrays bidimensionais |
| `aula05/` | Ponteiros, endereços de memória e aritmética de ponteiros |
| `aula06/` | Smart pointers (`std::make_unique`) e containers STL (`list`, `queue`, `stack`) |
| `aula07/` | Classes, encapsulamento, construtores, getters/setters com validação |
| `aula08-09/` | Alocação dinâmica, destrutor, cópia profunda, sobrecarga de operadores, `= default` / `= delete` |
| `aula10/` | Herança, funções virtuais, `override` e polimorfismo |

## Como compilar e executar

Cada exercício é um programa independente. Para compilar qualquer um deles:

```bash
g++ -std=c++17 -Wall -Wextra -o programa caminho/do/arquivo.cpp
./programa
```

Exemplo:

```bash
g++ -std=c++17 -Wall -Wextra -o caixa aula03/ex02_simulacao_caixa.cpp
./caixa
```

## Requisitos

- Compilador com suporte a C++17 (g++ 7+, clang 5+ ou MSVC 2017+)
