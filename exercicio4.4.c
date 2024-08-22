#include <stdio.h>

//area do quadrado
float areadoquadrado(float l){
return l*l ; }

//area do retangulo
float areadoretangulo(float b,float h){
return b*h; }

//area do trapezio
float areadotrapezio(float b1,float b2,float h){
return (b1+b2)*h/2 ; }

//area do triangulo
float areadotriangulo(float b,float h){
return (b*h)/2 ; }

//area do losango
float areadolosango(float D,float d){
return (D*d)/2 ; }

int main(){
int escolha;
float l,b,h,b1,b2,D,d;


do{
    printf("escolha uma opcao:\n");
    printf("1 Quadrado.\n");
    printf("2 retangulo.\n");
    printf("3 trapezio.\n");
    printf("4 triangulo.\n");
    printf("5 losango.\n");
    printf("6 finalizar.\n");
    scanf("%d",&escolha);

    switch(escolha){
    case 1:
        printf("digite o lado do quadrado:");
        scanf("%f",&l);
        printf("Area do quadrado: %.2f \n",areadoquadrado(l));
        break;
    case 2:
        printf("digite a base do retangulo: ");
        scanf("%f",&b);
        printf("digite a altura do retangulo: ");
        scanf("%f",&h);
        printf("Area do retangulo: %2.f \n",areadoretangulo(b,h));
        break;
    case 3:
        printf("Digite a base maior do trapezio: ");
        scanf("%f",&b1);
        printf("Digite a base menor do trapezio: ");
        scanf("%f",&b2);
        printf("Digite a altura do trapezio: ");
        scanf("%f",&h);
        printf("Area do trapézio: %.2f\n",areadotrapezio(b1,b2,h));
        break;
    case 4:
        printf("Digite a base do triangulo: ");
        scanf("%f",&b);
        printf("Digite a altura do triangulo: ");
        scanf("%f",&h);
        printf("Area do triangulo: %.2f\n",areadotriangulo(b,h));
        break;
    case 5:
        printf("Digite a diagonal maior do losango: ");
        scanf("%f",&D);
        printf("Digite a diagonal menor do losango: ");
        scanf("%f",&d);
        printf("Area do losango: %.2f\n",areadolosango(D,d));
        break;
    case 6:
        printf("Programa finalizado.\n");
        break;
    default:
        printf("Opcao invalida.Escolha uma opcao novamente"); }

    }while (escolha!=6);
    return  0;
}


