#include<stdio.h>
#include<math.h>

int product(int code,int quantity,double a,double b,double c,double d,double e)
{
    if(code==1)
    {
        a=quantity*4.00;
        printf("Total: R$ %.2lf\n",a);
    }
    else if(code==2)
    {
        b=quantity*4.50;
        printf("Total: R$ %.2lf\n",b);
    }
    else if(code==3)
    {
        c=quantity*5.00;
        printf("Total: R$ %.2lf\n",c);
    }
    else  if (code==4)
    {
        d=quantity*2.00;
        printf("Total: R$ %.2lf\n",d);
    }
    else  if (code==5)
    {
        e=quantity*1.50;
        printf("Total: R$ %.2lf\n",e);
    }

}

int main()
{
    int code,quantity;
    double a,b,c,d,e;
    scanf("%d%d",&code,&quantity);
    product(code, quantity,a, b, c, d, e);
    return 0;
}
