#include<Stdio.h>
#include<math.h>
int  math(double arry[6])
{
    double a=0;
    double sum=0;

    for(int i=0; i<6; i++)
    {
        scanf("%lf",&arry[i]);

    }
    for(int i=0; i<6; i++)
    {
        if(arry[i]>=0)
        {
            a=a+1;
        }
    }
    for(int i=0; i<6; i++)
    {
        if(arry[i]>=0)
        {
            sum=sum+arry[i];
        }

    }
    printf("%.0lf valores positivos\n",a);
    printf("%.1lf\n",sum/a);

}

int main()
{
    double arry[6];

    math(arry);
    return 0;
}
