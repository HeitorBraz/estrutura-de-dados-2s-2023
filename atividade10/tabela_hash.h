#ifndef TABELA_HASH_H
#define TABELA_HASH_H

#include <stdbool.h>

// Estrutura para representar uma tabela hash
typedef struct {
  char** dados;
  int tamanho;
  int quantidade;
} tabela_hash;

// Cria uma tabela hash com capacidade para `tamanho` elementos
tabela_hash* tabela_hash_criar(int tamanho);

// Libera a memória de uma tabela hash
void tabela_hash_liberar(tabela_hash* tabela);

// Obtém o valor associado à chave `chave`
char* tabela_hash_get(tabela_hash* tabela, char* chave);

// Adiciona o elemento `(chave, dado)` à tabela hash
void tabela_hash_put(tabela_hash* tabela, char* chave, char* dado);

// Verifica se a chave `chave` está na tabela hash
int tabela_hash_contains(tabela_hash* tabela, char* chave);

// Remove o elemento associado à chave `chave` da tabela hash
void tabela_hash_remove(tabela_hash* tabela, char* chave);

// Função hash que converte uma chave em um índice do array
int hash(char* chave);

#endif
