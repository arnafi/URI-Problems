#include<stdio.h>
#include<math.h>

int main()
{
    int number,hour;
    float salary,per;
    scanf("%d",&number);
    scanf("%d%f",&hour,&per);
    salary=hour*per;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
