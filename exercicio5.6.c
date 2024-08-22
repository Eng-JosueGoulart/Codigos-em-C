#include <stdio.h>

int numerosDivisores(int x,int y){

int count=0;
int menor= (x<y)? x:y;
int i;
for(i=2; i <= menor; i++){
    if (x % i==0 && y%i ==0){
    count++;
}
}
return count;
}
int main(){
int x=18;
int y=12;
printf("%d",numerosDivisores(x,y));
return 0;

}
