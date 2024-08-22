#include <stdio.h>
#include <math.h>

int main (){
float x,alpha,beta,funcao;
x= 6;
alpha= 2;
beta= 2;

if (x>=0){
   funcao= (1/(1+pow((x/alpha),beta)));}

else
    funcao=0;
printf("%f",funcao,x,alpha,beta);
return 0;
}

