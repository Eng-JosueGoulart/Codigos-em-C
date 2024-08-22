#include <stdio.h>

int main(){
float metros,decimetros,centimetros,milimetros;
printf("digite um numero em metros:");
scanf("%f",&metros);

decimetros= metros*10;
centimetros= metros*100;
milimetros= metros*1000;

printf("%.2f decimetros\n",decimetros);
printf("%.2f centimetros\n",centimetros);
printf("%.2f milimetros\n",milimetros);
return 0;

}





