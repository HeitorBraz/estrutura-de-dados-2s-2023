typedef struct Objeto{
    char valor;
    struct Objeto* proximo_objeto;
}Objeto;

typedef struct Pilha{
    Objeto* topo;
    int quantidade;
}Pilha;

Pilha* pilha();

void empilhar(Objeto* o, Pilha* P);

Objeto* desempilhar(Pilha P);
