#include<stdio.h>
#include<math.h>

int even(int N)
{
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {

        if(i%2==0)

            {
                printf("%d^2 = %d\n",i,(int)pow(i,2));

            }

    }
}

int main()
{
    int N;
    even(N);
    return 0;
}
