#include<stdio.h>
#include<math.h>

int salary(float a)
{
    if(a>=0 && a<=400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a+a*(15.0/100.0),a*(15.0/100.0));
    }
    else if(a>=400.01 && a<=800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",a+a*(12.0/100.0),a*(12.0/100.0));
    }
    else if(a>=800.01 && a<=1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",a+a*(10.0/100.0),a*(10.0/100.0));
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",a+a*(7.0/100.0),a*(7.0/100.0));
    }
    else if(a>2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",a+a*(4.0/100.0),a*(4.0/100.0));
    }
}


int main()
{
    float a;
    scanf("%f",&a);
    salary(a);
    return 0;
}
