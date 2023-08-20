#include <stdio.h>

int conta_int_array(int array[], int n, int busca) {
    int contagem = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == busca) {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    int array[] = {5, 7, 9, 6, 7, 11, 6, 5};
    int n = sizeof(array)/sizeof(array[0]);
    int busca = 7;
    printf("Quantidade de ocorrências de %d no array: %d\n", busca, conta_int_array(array, n, busca));
    return 0;
}
