#include<stdio.h>

int even(int arry[5]){
    int a=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<5;i++){
        if(arry[i]%2==0){
            a+=1;
        }
    }printf("%d valores pares\n",a);
}
int main(){
   int arry[5];
   even(arry);
}
