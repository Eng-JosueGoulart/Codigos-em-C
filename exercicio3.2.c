#include <stdio.h>

int main(){
    int numero;
    printf("digite um numero inteiro:");
    scanf("%d", &numero);

    if (numero % 2==0){
    printf("%d e um numero par, portanto retorna 1\n",numero);
    }
    else {
    printf("%d e um numero impar,portanto retorna 0\n",numero);
    }
    return 0;
}



