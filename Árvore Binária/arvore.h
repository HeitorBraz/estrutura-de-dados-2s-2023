#ifndef ARVORE_H
#define ARVORE_H

typedef struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* criarNo(int chave);
TreeNode* inserir(TreeNode* raiz, int chave);
TreeNode* buscar(TreeNode* raiz, int chave);
TreeNode* remover(TreeNode* raiz, int chave);
void percorrerPreOrdem(TreeNode* raiz);
void percorrerEmOrdem(TreeNode* raiz);
void percorrerPosOrdem(TreeNode* raiz);
TreeNode* minimo(TreeNode* raiz);
TreeNode* maximo(TreeNode* raiz);
void liberarArvore(TreeNode* raiz);

#endif 
