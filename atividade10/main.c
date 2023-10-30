#include <stdio.h>
#include "tabela_hash.h"

int main() {
  // Cria uma tabela hash com capacidade para 10 elementos
  tabela_hash* tabela = tabela_hash_criar(10);

  // Adiciona alguns elementos à tabela
  tabela_hash_put(tabela, "chave1", "valor1");
  tabela_hash_put(tabela, "chave2", "valor2");
  tabela_hash_put(tabela, "chave3", "valor3");

  // Obtém o valor associado à chave "chave1"
  char* valor = tabela_hash_get(tabela, "chave1");
  printf("Valor associado à chave 'chave1': %s\n", valor);

  // Verifica se a chave "chave2" está na tabela
  int existe = tabela_hash_contains(tabela, "chave2");
  printf("A chave 'chave2' existe? %d\n", existe);

  // Remove o elemento associado à chave "chave2"
  tabela_hash_remove(tabela, "chave2");

  // Verifica se a chave "chave2" ainda está na tabela
  existe = tabela_hash_contains(tabela, "chave2");
  printf("A chave 'chave2' existe? %d\n", existe);

  // Libera a memória da tabela
  tabela_hash_liberar(tabela);

  return 0;
}
