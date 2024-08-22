#include <stdio.h>
#include <math.h>

int maior(int x,int y){
    return (x>=y)? x:y;
}
int main(){
int x,y;
x=123;
y=172;
printf("%d",maior(x,y));
return 0;
}

