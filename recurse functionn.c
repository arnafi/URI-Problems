#include<stdio.h>
#include<math.h>
int num(int n){
    if(n<=50){
        printf("%d\n",n);
        num(n+1);
    }
}

int main(){

    num(1);
}
