#include<stdio.h>


int interval(int N,int x){
    int a=0,b=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        if(x>=10 && x<=20){
        a++;
        }
        else{
        b++;
                }
    }
    printf("%d in\n",a);
    printf("%d out\n",b);




}

int main(){
    int N,x;
    interval(N,x);
}
