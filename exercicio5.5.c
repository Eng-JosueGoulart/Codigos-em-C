#include <stdio.h>

int main(){
int n,primeiro=0,segundo=1,proximo,i;
n=5;
for(i=0; i<n; i++ ){

if (i<=1)
    proximo=1;
else {
    proximo=primeiro+segundo;
    primeiro=segundo;
    segundo=proximo;
}}
printf("%d",proximo);
return 0;
}
