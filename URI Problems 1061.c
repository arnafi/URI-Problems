#include<stdio.h>
#include<math.h>

int event(int w,int x,int y,int z,int w1,int x1,int y1,int z1)
{

    w=w1-w;
    x=x1-x;
    y=y1-y;
    z=z1-z;
    if(x<0)
    {
        x+=24;
        w--;
    }
    if(y<0)
    {
        y+=60;
        x--;
    }
    if(z<0)
    {
        z+=60;
        y--;
    }
    printf("%d dia(s)\n",w);
    printf("%d hora(s)\n",x);
    printf("%d minuto(s)\n",y);
    printf("%d segundo(s)\n",z);
}

int main()
{
    int w,x,y,z,w1,x1,y1,z1;
    scanf("Dia %d",&w);
    scanf("%d : %d : %d\n",&x,&y,&z);
    scanf("Dia %d",&w1);
    scanf("%d : %d : %d",&x1,&y1,&z1);
    event(w,x,y,z,w1,x1,y1,z1);
    return 0;
}
