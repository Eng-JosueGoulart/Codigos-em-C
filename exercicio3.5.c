#include <stdio.h>
#include <math.h>

int main(){
float v,pi,r;
printf("digite o valor do raio da esfera:\n");
scanf("%f",&r);
pi=M_PI;
v= (4.0/3.0*pi*pow(r,3));
printf("o volume da esfera e igual a:%.2f",v );
return 0;
}
