#include<stdio.h>
#include<math.h>

int main()
{
    int x;

    scanf("%d",&x);
    if(x%2!=0){
    for(int i=x; i<=x+11; i++)
    {
       if(i%2!=0)
        {
            printf("%d\n",i);
        }
        }
        }
        else if(x%2==0){
    for(int i=x; i<=x+11; i++)
    {
       if(i%2!=0)
        {
            printf("%d\n",i);
        }
        }



    }

        return 0;
    }
