#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    int size = argc - 1;
    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        array[i] = atoi(argv[i + 1]);
    }

    bubble_sort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
