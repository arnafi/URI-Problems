#include<stdio.h>
#include<math.h>

int sum(float a,float b,float c){
    if(a+b>c && b+c>a && a+c>b){

        printf("Perimetro = %.1f\n",a+b+c);
    }
    else{

        printf("Area = %.1f\n",((a+b)*c)/2.0);
    }
}

int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    sum(a,b,c);
    return 0;
}
