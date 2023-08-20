#include <stdio.h>
#include <limits.h>

void menor_maior_array(int array[], int n, int *menor, int *maior) {
    *menor = INT_MAX;
    *maior = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int array[] = {5, 7, 9, 6};
    int n = sizeof(array)/sizeof(array[0]);
    int menor, maior;
    menor_maior_array(array, n, &menor, &maior);
    printf("Menor elemento do array: %d\n", menor);
    printf("Maior elemento do array: %d\n", maior);
    return 0;
}
