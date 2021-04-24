#include<stdio.h>

int main(){
    double a=0;
    double arry[6];
    for(int i=0;i<6;i++){
        scanf("%lf",&arry[i]);

    }
    for(int i=0;i<6;i++){
        if((int)arry[i]>=0){
            a=a+1;
        }
    }printf("%.0lf valores positivos\n",a);
    return 0;
}
