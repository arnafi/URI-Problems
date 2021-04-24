#include<stdio.h>
#include<math.h>

int main()
{
    double N;
    int num[7]= {100.0,50.0,20.0,10.0,5.0,2.0,1.0},money[7],i,a;
    int sum[5]= {50.0,25.0,10.0,5.0,1.0},coin[5];
    scanf("%lf",&N);
    a=N;
    for(i=0; i<7; i++)
    {
        money[i]=a/num[i];
        a=a%num[i];
    }


    N=N*100;
    a=(int)N%100;

    for(i=0; i<5; i++)
    {
        coin[i]=a/sum[i];
        //printf("%d\n",a);
        a= a%sum[i];
    }
    printf("NOTAS:\n");
    for(i=0; i<6; i++)
    {
        printf("%d nota(s) de R$ %.2f\n",money[i],(float)num[i]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n",money[6],(float)num[6]);
    for(i=0; i<5; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",coin[i],(float)sum[i]/100);
    }
    return 0;

}
