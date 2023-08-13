#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Por favor, forneça um número como argumento.\n");
        return 1;
    }

    int n = atoi(argv[1]);
    bool is_prime = true;

    if (n <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }

    return 0;
}
