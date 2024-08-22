#include <stdio.h>

//algoritimo do mddc
int mdc(int  x,int y){
    int r;
    while (y!=0){

        r= y;
        y= x%y;
        x=r;
    }
    return x ;
    }

//algoritimo do mmc
int mmc(int  x,int y){
    return  (x*y)/mdc(x,y);
    }

int main(){
int x,y;
x= 16;
y= 12;
printf("%d",mmc(x,y));
return 0;
}


