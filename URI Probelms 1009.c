#include<stdio.h>
#include<math.h>

int main(){
    char name[500];
    double salary,persent,TOTAL;

    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&persent);
    TOTAL=salary+(persent*(15/100.00));
    printf("TOTAL = R$ %.2lf",TOTAL);
    return 0;
}
