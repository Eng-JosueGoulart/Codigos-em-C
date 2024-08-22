#include <stdio.h>

int mdc(int x,int y){
  while (y!=0){
    int r=y;
    y= x%y;
    x= r;
  }
    return x;

}

int primosEntreSi(int x,int y){
  if (mdc(x,y)==1)
    return 1;

  else
    return 0;
}


int main(){

int x= 27;
int y= 32;
printf("%d",primosEntreSi(x,y));
}




