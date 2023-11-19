#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

// Cria um Nó
TreeNode* criarNo(int chave) {
    TreeNode* novoNo = (TreeNode*)malloc(sizeof(TreeNode));
    if (novoNo != NULL) {
        novoNo->key = chave;
        novoNo->left = novoNo->right = NULL;
    }
    return novoNo;
}

// Insere um Nó
TreeNode* inserir(TreeNode* raiz, int chave) {
    if (raiz == NULL) {
        return criarNo(chave);
    }

    if (chave < raiz->key) {
        raiz->left = inserir(raiz->left, chave);
    } else if (chave > raiz->key) {
        raiz->right = inserir(raiz->right, chave);
    }

    return raiz;
}

// Busca um Nó
TreeNode* buscar(TreeNode* raiz, int chave) {
    if (raiz == NULL || raiz->key == chave) {
        return raiz;
    }

    if (chave < raiz->key) {
        return buscar(raiz->left, chave);
    } else {
        return buscar(raiz->right, chave);
    }
}

// Remove um Nó
TreeNode* remover(TreeNode* raiz, int chave) {
    if (raiz == NULL) {
        return raiz;
    }

    if (chave < raiz->key) {
        raiz->left = remover(raiz->left, chave);
    } else if (chave > raiz->key) {
        raiz->right = remover(raiz->right, chave);
    } else {
        if (raiz->left == NULL) {
            TreeNode* temp = raiz->right;
            free(raiz);
            return temp;
        } else if (raiz->right == NULL) {
            TreeNode* temp = raiz->left;
            free(raiz);
            return temp;
        }

        TreeNode* temp = minimo(raiz->right);
        raiz->key = temp->key;
        raiz->right = remover(raiz->right, temp->key);
    }
    return raiz;
}

// Percorre em Pré Ordem
void percorrerPreOrdem(TreeNode* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->key);
        percorrerPreOrdem(raiz->left);
        percorrerPreOrdem(raiz->right);
    }
}

// Percorre em Ordem
void percorrerEmOrdem(TreeNode* raiz) {
    if (raiz != NULL) {
        percorrerEmOrdem(raiz->left);
        printf("%d ", raiz->key);
        percorrerEmOrdem(raiz->right);
    }
}

// Percorre em Pós Ordem
void percorrerPosOrdem(TreeNode* raiz) {
    if (raiz != NULL) {
        percorrerPosOrdem(raiz->left);
        percorrerPosOrdem(raiz->right);
        printf("%d ", raiz->key);
    }
}

// Encontra o Nó Mínimo
TreeNode* minimo(TreeNode* raiz) {
    TreeNode* atual = raiz;
    while (atual && atual->left != NULL) {
        atual = atual->left;
    }
    return atual;
}

// Encontra o Nó Máximo
TreeNode* maximo(TreeNode* raiz) {
    TreeNode* atual = raiz;
    while (atual && atual->right != NULL) {
        atual = atual->right;
    }
    return atual;
}

//Liberar Memória
void liberarArvore(TreeNode* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->left);
        liberarArvore(raiz->right);
        free(raiz);
    }
}
