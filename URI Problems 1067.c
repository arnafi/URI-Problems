#include<stdio.h>
#include<math.h>

int odd(int x)
{
    scanf("%d",&x);

    for(int i=1; i<=x; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }

}

int main()
{
    int x;
    odd(x);
    return 0;
}
