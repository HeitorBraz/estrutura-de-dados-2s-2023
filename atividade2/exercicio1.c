#include <stdio.h>

int soma_array(int array[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};
    int n = sizeof(array)/sizeof(array[0]);
    printf("Soma dos elementos do array: %d\n", soma_array(array, n));
    return 0;
}
