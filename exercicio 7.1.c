#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 100

int main() {
    int numLinhas, numColunas, j, i;
    FILE *arq;

    arq = fopen("matriz.txt", "r");

    if (arq == NULL) {
        printf("\nERRO AO LER O ARQUIVO\n");
        return 1;
    }

    fscanf(arq, "%d %d", &numLinhas, &numColunas);

    int m1[MAX_TAM][MAX_TAM], m2[MAX_TAM][MAX_TAM];


    for (i = 0; i < numLinhas; i++) {
        for (j = 0; j < numColunas; j++) {
            fscanf(arq, "%d", &m1[i][j]);
        }
    }
    for (i = 0; i < numLinhas; i++) {
        for (j = 0; j < numColunas; j++) {
            fscanf(arq, "%d", &m2[i][j]);
        }
    }

    fclose(arq);

    printf("Matriz Soma:\n");
    for (i = 0; i < numLinhas; i++) {
        for (j = 0; j < numColunas; j++) {
            m1[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
