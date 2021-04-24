#include<stdio.h>
#include<math.h>

int main(){
    int unitsone,productsone,unitstwo,productstwo;
    double priceone,pricetwo,VALOR_A_PAGAR;

    scanf("%d%d%lf",&unitsone,&productsone,&priceone);
    scanf("%d%d%lf",&unitstwo,&productstwo,&pricetwo);
    VALOR_A_PAGAR=((productsone*priceone)+(productstwo*pricetwo));
    printf("VALOR A PAGAR: R$ %.2lf\n",VALOR_A_PAGAR);
    return 0;
}
