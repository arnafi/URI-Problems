#include<stdio.h>
int odd(int a,int b)
{
    scanf("%d%d",&a,&b);

    int num=0;
    int sum=0;
    if(a>b)
    {
        for(int i=b+1; i<a; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }printf("%d\n",sum);
    }


    else if(a<b)
    {
        for(int i=a+1; i<b; i++)
        {
            if(i%2!=0)
            {
                num+=i;
            }
        }printf("%d\n",num);
    }


}
int main()
{
    int a,b;
    odd(a,b);
    return 0;
}
