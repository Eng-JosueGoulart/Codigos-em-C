#include <stdio.h>
#include <math.h>
float funcao(float n1,float n2,float n3) {
return pow(n1,2)+ n2+n3;
}

int main(){
float n1,n2,n3;
printf("digite um numero:");
scanf("%f",& n1);
printf("digite um numero:");
scanf("%f",& n2);
printf("digite um numero:");
scanf("%f",& n3);

printf("o quadrado de %.2f + a soma de %.2f e %.2f e igual a:%.2f",n1,n2,n3,funcao(n1,n2,n3));

}
