#include <stdio.h>

int main(){
int numero1;
printf("digite um numero:");
scanf("%d",&numero1);

while (1){
 if (numero1<0){
        printf("Numero negativo detectado. Insira numeros positivos ou zero.\n");
        printf("digite um novo numero:");
        scanf("%d",&numero1);
        continue;
}

 else if (numero1==0){
   printf("Programa encerrado.\n");
   break;
 }
  else if (numero1%2==0){
        printf("%d e um numero par.\n",numero1);
        break;
    }
    else{
        printf("%d e um numero impar.\n",numero1);
        break;
    }
}

return 0;
}






