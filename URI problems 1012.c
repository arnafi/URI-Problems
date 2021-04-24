#include<stdio.h>
#include<math.h>

int main(){
    double A,B,C,x,y,z,k,l,pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    x=1/2.0*A*C;
    y=pi*(C*C);
    z=1/2.0*C*(A+B);
    k=B*B;
    l=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",x,y,z,k,l);
    return 0;
}

