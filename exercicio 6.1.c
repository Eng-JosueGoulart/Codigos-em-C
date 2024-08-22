#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define MIN 1
#define MAX 300
#define TAMANHO_MAX 5
int main(){
//vetor
int produtos[TAMANHO_MAX];

//semente geradora de numeros aleatorios
srand(time(NULL));

//gerador de 5 numeros aleatorios
for (int i=0; i<TAMANHO_MAX ; i++){
    produtos[i]= MIN+rand()%(MAX-MIN+1);
    printf("numeros aleatorios%d: %d\n", i+1,produtos[i]);
}
//maior e menor numero aleatorio gerado
int maior= -9999;
int menor = 99999999;
int soma=0;
for(int i=0; i<TAMANHO_MAX; i++){
    if(produtos[i]> maior){
        maior= produtos[i];}

        if(produtos[i]<menor){
        menor= produtos[i];
        }
        soma+= produtos[i];
}

//valor medio gerado
double media= (double)soma/TAMANHO_MAX;

//primeiro valor gerado
int primeiro;
primeiro= produtos[0];

//se valor gerado
int ultimo;
ultimo= produtos[4];

//valor mediano do vetor
int mediano;
mediano= produtos[TAMANHO_MAX/2];

 printf("----------------------\n");
 printf("maior numero gerado:%d\n",maior);
 printf("menor numero gerado: %d\n",menor);
 printf("valor medio:%2.f\n",media);
 printf("primeiro valor gerado:%d\n",primeiro);
 printf("ultimo valor gerado:%d\n",ultimo);
 printf("valor mediano do vetor:%d",mediano);
 return 0;
}










