#include<stdio.h>
#include<math.h>

int game(int a,int b,int c,int d,int h,int m)
{
    h=c-a;
    if(h<=0)
    {
        h=24+(c-a);

    }
    m=d-b;
    if(m<=0)
    {
        m=60+(d-b);
        h--;
    }
    if(a==c && b==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(h<24)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }else{
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m);
    }

}
int main()
{
    int a,b,c,d,h,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    game(a,b,c,d,h,m);

    return 0;
}

