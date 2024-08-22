#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Os numeros que dividem ambos %d e %d sao:\n", num1, num2);

    // Encontrando os divisores comuns
    int i;
    for (i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            printf("%d;", i);
        }
    }

    return 0;
}

