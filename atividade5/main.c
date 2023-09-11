#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 1000

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    char **words = malloc(MAX_WORDS * sizeof(char *));
    for (int i = 0; i < MAX_WORDS; i++) {
        words[i] = malloc(MAX_WORD_LENGTH * sizeof(char));
    }

    int count = 0;
    while (fscanf(file, "%s", words[count]) != EOF && count < MAX_WORDS) {
        count++;
    }

    fclose(file);

    bubble_sort(words, count);

    file = fopen("arq_palavras_ordenado.txt", "w");
    if (file == NULL) {
        printf("Não foi possível criar o arquivo arq_palavras_ordenado.txt\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s\n", words[i]);
    }

    fclose(file);

    for (int i = 0; i < MAX_WORDS; i++) {
        free(words[i]);
    }
    free(words);

    return 0;
}
