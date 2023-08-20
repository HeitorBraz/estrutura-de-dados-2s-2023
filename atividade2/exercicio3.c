#include <stdio.h>
#include <string.h>

int busca_string(char *array[], int n, char *busca) {
    for (int i = 0; i < n; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char *array[] = {"texto", "J", "EDA"};
    int n = sizeof(array)/sizeof(array[0]);
    char *busca = "EDO";
    printf("Resultado da busca: %d\n", busca_string(array, n, busca));
    return 0;
}
