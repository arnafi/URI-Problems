#include<stdio.h>
#include<math.h>

int math(double a,double b,double c,double d,double x,double y){
    d=(b*b)-4.0*a*c;
    if(d>0 && a!=0){
        x=(-b+sqrt(d))/(2.0*a);
        y=(-b-sqrt(d))/(2.0*a);
        printf("R1 = %.5lf\n",x);
        printf("R2 = %.5lf\n",y);
    }else{
     printf("Impossivel calcular\n");
    }
}


int main(){
    double a,b,c,d,x,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    math(a,b,c,d,x,y);
    return 0;
}
