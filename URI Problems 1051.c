#include<stdio.h>
#include<math.h>

int taxes(float a){
    scanf("%f",&a);
    if(a>=0.00 && a<=2000.00){
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00){
        printf("R$ %.2f\n",(a-2000.01)*0.08);
    }
     else if(a>=3000.01 && a<=4500.00){
        printf("R$ %.2f\n",(1000.00*0.08)+(a-3000.01)*0.18);
    }
     else if(a>4500.00){
        printf("R$ %.2f\n",(1000.00*0.08)+(1500.00*0.18)+((a-4500)*0.28));
    }
}

int main(){
    float a;
    taxes(a);
    return 0;
}
