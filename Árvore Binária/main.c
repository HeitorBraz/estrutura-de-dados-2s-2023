#include <stdio.h>
#include "arvore.h"

int main() {
    TreeNode* raiz = NULL;

    // Inserir nós
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Percorrer em ordem: ");
    percorrerEmOrdem(raiz);
    printf("\n");

    printf("Percorrer em pre-ordem: ");
    percorrerPreOrdem(raiz);
    printf("\n");

    printf("Percorrer em pos-ordem: ");
    percorrerPosOrdem(raiz);
    printf("\n");

    printf("Buscando o no com chave 40: %s\n", buscar(raiz, 40) != NULL ? "Encontrado" : "Nao encontrado");
    printf("Buscando o no com chave 90: %s\n", buscar(raiz, 90) != NULL ? "Encontrado" : "Nao encontrado");

    printf("Removendo o no com chave 20\n");
    raiz = remover(raiz, 20);
    printf("Percorrer em ordem: ");
    percorrerEmOrdem(raiz);
    printf("\n");

    printf("No minimo: %d\n", minimo(raiz)->key);
    printf("No maximo: %d\n", maximo(raiz)->key);

    liberarArvore(raiz);

    return 0;
}
