#include<stdio.h>
#include<math.h>
int main(){
int A ,B;
scanf("%d%d",&A,&B);
if(B%A==0 || A%B==0){
    printf("Sao Multiplos");
}
else {
    printf("Nao sao Multiplos");
}
return 0;
}