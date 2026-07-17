# 💻 Exercícios em C++ — Universidade Federal do Mato Grosso (UFMT)

Repositório criado para armazenar e organizar os exercícios desenvolvidos na disciplina de Programação do curso de Ciência da Computação da Universidade Federal do Mato Grosso (UFMT).

## 🎯 Objetivo

Este repositório tem como finalidade:

* Praticar e aprimorar os conhecimentos em lógica de programação e linguagem C++.
* Servir como base de estudo para outros alunos e interessados.
* Registrar o progresso durante a graduação em Ciência da Computação.

## 🧩 Estrutura do Repositório

A organização dos arquivos segue a estrutura abaixo.

Na raiz estão exercícios avulsos de lógica de programação (MDC, Número Primo, Potência Iterativa, Soma dos Dígitos, Série Harmônica).

A pasta [`exercicios-cpp/`](./exercicios-cpp) reúne os exercícios resolvidos das **aulas 2 a 10** da disciplina de Programação:

| Pasta | Conteúdo |
|---|---|
| [`exercicios-cpp/aula02/`](./exercicios-cpp/aula02) | Entrada e saída (`cin`, `getline`, `cout`), tipos de dados e formatação (`iomanip`) |
| [`exercicios-cpp/aula03/`](./exercicios-cpp/aula03) | Condicionais (`if`/`else`, `switch`), operadores lógicos e loops |
| [`exercicios-cpp/aula04/`](./exercicios-cpp/aula04) | Funções, funções `inline` e arrays bidimensionais |
| [`exercicios-cpp/aula05/`](./exercicios-cpp/aula05) | Ponteiros, endereços de memória e aritmética de ponteiros |
| [`exercicios-cpp/aula06/`](./exercicios-cpp/aula06) | Smart pointers (`std::make_unique`) e containers STL (`list`, `queue`, `stack`) |
| [`exercicios-cpp/aula07/`](./exercicios-cpp/aula07) | Classes, encapsulamento, construtores, getters/setters com validação |
| [`exercicios-cpp/aula08-09/`](./exercicios-cpp/aula08-09) | Alocação dinâmica, destrutor, cópia profunda, sobrecarga de operadores, `= default` / `= delete` |
| [`exercicios-cpp/aula10/`](./exercicios-cpp/aula10) | Herança, funções virtuais, `override` e polimorfismo |

## ⚙️ Como compilar e executar

Cada exercício é um programa independente. Para compilar qualquer um deles:

```bash
g++ -std=c++17 -Wall -Wextra -o programa caminho/do/arquivo.cpp
./programa
```

Exemplo:

```bash
g++ -std=c++17 -Wall -Wextra -o caixa exercicios-cpp/aula03/ex02_simulacao_caixa.cpp
./caixa
```

## 📋 Requisitos

* Compilador com suporte a C++17 (g++ 7+, clang 5+ ou MSVC 2017+)
