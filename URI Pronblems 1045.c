#include<stdio.h>
int sort(double a,double b,double c,int swap)
{
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a<b)
    {
        swap=a;
        a=b;
        b=swap;
    }
    if(b<c)
    {
        swap=b;
        b=c;
        c=swap;
    }
    if(a<b)
    {
        swap=a;
        a=b;
        b=swap;
    }




    if(b+c<=a)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a)==(b*b)+(c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a)>(b*b)+(c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a)<(b*b)+(c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c && a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }


    if(a==b && b!=c )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    else if(a==c && a!=b )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
   else if(c==b && b!=a )
    {
        printf("TRIANGULO ISOSCELES\n");
    }



}


int main()
{
    double a,b,c,swap;

    sort(a,b,c,swap);

    return 0;

}
