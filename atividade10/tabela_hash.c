#include <stdlib.h>
#include "tabela_hash.h"

// Cria uma tabela hash com capacidade para `tamanho` elementos
tabela_hash* tabela_hash_criar(int tamanho) {
  tabela_hash* tabela = malloc(sizeof(tabela_hash));
  tabela->dados = malloc(sizeof(char*) * tamanho);
  tabela->tamanho = tamanho;
  tabela->quantidade = 0;
  return tabela;
}

// Libera a memória de uma tabela hash
void tabela_hash_liberar(tabela_hash* tabela) {
  free(tabela->dados);
  free(tabela);
}

// Obtém o valor associado à chave `chave`
char* tabela_hash_get(tabela_hash* tabela, char* chave) {
  int indice = hash(chave);
  return tabela->dados[indice];
}

// Adiciona o elemento `(chave, dado)` à tabela hash
void tabela_hash_put(tabela_hash* tabela, char* chave, char* dado) {
  int indice = hash(chave);
  tabela->dados[indice] = dado;
}

// Verifica se a chave `chave` está na tabela hash
int tabela_hash_contains(tabela_hash* tabela, char* chave) {
  int indice = hash(chave);
  return tabela->dados[indice] != NULL;
}

// Remove o elemento associado à chave `chave` da tabela hash
void tabela_hash_remove(tabela_hash* tabela, char* chave) {
  int indice = hash(chave);
  tabela->dados[indice] = NULL;
}

// Função hash que converte uma chave em um índice do array
int hash(char* chave) {
  // TODO: Implementar uma função hash adequada
  return 0;
}
