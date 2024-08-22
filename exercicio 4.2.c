#include <stdio.h>

int main() {
    int numero, numeroMaior = 0;
    char continuar;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero > numeroMaior) {
            numeroMaior = numero;
        }

        while ((continuar = getchar()) != '\n' && continuar != EOF);

        printf("Deseja inserir outro numero? (S para Sim, N para Nao): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("O maior numero inserido foi: %d\n", numeroMaior);
    return 0;
}

