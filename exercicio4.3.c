#include <stdio.h>

float calcularMedia(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

float encontrarMaior(float a, float b, float c) {
    float maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    return maior;
}

float encontrarMenor(float a, float b, float c) {
    float menor = a;
    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    return menor;
}

float calcularSoma(float a, float b, float c) {
    return a + b + c;
}

float calcularSomaQuadrados(float a, float b, float c) {
    return (a * a) + (b * b) + (c * c);
}

int main() {
    float a, b, c;
    int escolha;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    do {
        printf("\nEscolha uma das opcoes:\n");
        printf("1  Media dos Valores.\n");
        printf("2  Maior Valor.\n");
        printf("3  Menor Valor.\n");
        printf("4  Soma dos Valores.\n");
        printf("5  Soma dos Quadrados dos Valores.\n");
        printf("6  Finalizar.\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Media dos Valores: %.2f\n", calcularMedia(a, b, c));
                break;
            case 2:
                printf("Maior Valor: %.2f\n", encontrarMaior(a, b, c));
                break;
            case 3:
                printf("Menor Valor: %.2f\n", encontrarMenor(a, b, c));
                break;
            case 4:
                printf("Soma dos Valores: %.2f\n", calcularSoma(a, b, c));
                break;
            case 5:
                printf("Soma dos Quadrados dos Valores: %.2f\n", calcularSomaQuadrados(a, b, c));
                break;
            case 6:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opção invalida. Por favor, escolha novamente.\n");
        }
    } while (escolha != 6);

    return 0;
}








