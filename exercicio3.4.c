#include <stdio.h>
#include <math.h>


//soma dos numeros
int soma(int x ,int y){
return x+y ;
}
// Produto do Primeiro pelo Quadrado do Segundo
int quadrado_do_segundo(int x,int y){
return (x*(y*y));
}
//O Quadrado do Primeiro Número
int quadrado_do_primeiro(int x,int y){
return x*x;
}
//Seno da diferença do primeiro número pelo segundo
float seno(int x,int y){
return sin(x-y);
}
int  main(){
int v1,v2;
printf("digite a primeira variavel:");
scanf("%d",& v1);
printf("digite a segunda variavel:");
scanf("%d",& v2);

printf("Soma dos numeros:%d\n",soma(v1,v2));
printf("O Produto do Primeiro pelo Quadrado do Segundo:%d\n",quadrado_do_segundo(v1,v2));
printf("O Quadrado do Primeiro Numero:%d\n",quadrado_do_primeiro(v1,v2));
printf("Seno da diferenca do primeiro numero pelo segundo:%f",seno(v1,v2));
return 0;

}


