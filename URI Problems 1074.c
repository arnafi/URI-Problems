#include<stdio.h>

int even(int N,int x)
{
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&x);
        if(x<0 && x%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        if(x<0 && x%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(x>0 && x%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(x>0 && x%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        if(x==0)
        {
            printf("NULL\n");
        }

    }
}

int main()
{
    int N,x;
    even(N,x);
    return 0;
}
