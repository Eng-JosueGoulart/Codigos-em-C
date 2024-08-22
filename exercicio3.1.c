#include <stdio.h>
#include <math.h>

int main(){
    double calcula_resistencia_total;
    double R1= 20;
    double R2= 30;
    double R3= 30;

   calcula_resistencia_total= 1 / ( ( 1/R1 ) + ( 1 / R2 ) + ( 1 / R3 ) );
   printf("resistencia total:%f",calcula_resistencia_total);
   return 0;

   }
