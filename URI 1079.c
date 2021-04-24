#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    double a,b,c;
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        double sum = (a*2)/10+(b*3)/10+(c*5)/10;
        printf("%.1lf\n",sum);

    }
}

