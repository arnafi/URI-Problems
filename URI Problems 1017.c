#include<stdio.h>
#include<math.h>

int main(){
    int kmh,t2;
    double l,t1=12.0;
    scanf("%d%d",&t2,&kmh);
    l=(t2*kmh)/t1;
    printf("%.3lf\n",l);
    return 0;
}
