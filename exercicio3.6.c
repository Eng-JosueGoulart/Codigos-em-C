#include <stdio.h>

int main(){
float quantos_salarios_minimos,salario_minimo,salarioP1;

salario_minimo= 1412;

printf("digite o valor do seu salario:");
scanf("%f", & salarioP1);

quantos_salarios_minimos= (salarioP1/salario_minimo);

printf("voce ganha %.1f salarios minimos.",quantos_salarios_minimos);
return 0;
}



