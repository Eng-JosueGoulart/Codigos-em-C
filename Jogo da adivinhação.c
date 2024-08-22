#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100
#define MIN 0

int main(){
//numero escolhido pelo usuario
int escolha;
printf("digite um numero inteiro:");
scanf("%d",& escolha);

//semente geradora de numeros aleatorios
srand(time(NULL));

//gerador do numero aleatorio
int numero_aleatorio= MIN+rand()%(MAX-MIN+1);

while(escolha!=numero_aleatorio){
    if(escolha<numero_aleatorio){
        printf("ERROU, o numero e MAIOR que %d.\n",escolha);
    }
    else if(escolha>numero_aleatorio){
        printf("ERROU, o numero e MENOR que %d.\n",escolha);
}
// Pedir novo palpite ao usuário
        printf("Tente novamente: ");
        scanf("%d", &escolha);
}
 printf("ACERTOU !");

return 0;
}

