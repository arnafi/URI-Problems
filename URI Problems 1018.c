#include<stdio.h>

int main()
{
    int num[7]= {100,50,20,10,5,2,1},money[7],n,i;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0; i<7; i++)
    {
        money[i]=n/num[i];
        n=n%num[i];

    }
    for(i=0; i<7; i++)
    {
        printf("%d nota(s) de R$ %d,00\n",money[i],num[i]);
    }
    return 0;
}
