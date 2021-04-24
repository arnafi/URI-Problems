#include<stdio.h>
#include<math.h>

int average(float n1,float n2,float n3,float n4,float media,float exam_result,float media_final)
{
    media=((n1*2.0)/10.0)+((n2*3.0)/10.0)+((n3*4.0)/10.0)+((n4*1.0)/10.0);
    printf("Media: %.1f\n",media);
    if(media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(media>=5.0 && media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&exam_result);
        printf("Nota do exame: %.1f\n",exam_result);
        media_final=(media+exam_result)/2.0;
        if(media_final>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media_final);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }
}


int main()
{
    float n1,n2,n3,n4,media,exam_result,media_final;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    average(n1,n2,n3,n4,media,exam_result,media_final);
    return 0;
}
