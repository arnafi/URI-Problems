#include<stdio.h>

int even(int arry[5])
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arry[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(arry[i]%2==0)
        {
            a+=1;
        }
    }
    printf("%d valor(es) par(es)\n",a);
    for(int i=0; i<5; i++)
    {
        if(arry[i]%2!=0)
        {
            b+=1;
        }
    }
    printf("%d valor(es) impar(es)\n",b);
    for(int i=0; i<5; i++)
    {
        if(arry[i]>0)
        {
            c+=1;
        }
    }
    printf("%d valor(es) positivo(s)\n",c);
    for(int i=0; i<5; i++)
    {
        if(arry[i]<0)
        {
            d+=1;
        }
    }
    printf("%d valor(es) negativo(s)\n",d);
}
int main()
{
    int arry[5];
    even(arry);
    return 0;
}

