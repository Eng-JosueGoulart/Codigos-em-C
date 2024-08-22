#include <stdio.h>
#include <math.h>
int elevado(int y,int z){
return pow(y,z);
}

int main(){
int v1,v2;
printf("digite a base:");
scanf("%d",&v1);
printf("digite o expoente:");
scanf("%d",&v2);

printf("%d elevado a %d e igual a %d\n",v1,v2,elevado(v1,v2));

return 0;

}
