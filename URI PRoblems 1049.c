#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[25],b[25],c[25],a1[]="vertebrado",a2[]="ave", a3[]="carnivoro",a4[]="onivoro",a5[]="mamifero",a6[]="herbivoro",a7[]="invertebrado",a8[]="inseto",a9[]="hematofago",a10[]="anelideo" ;



            scanf("%s%s%s",&a,&b,&c);
            if(0==strcmp(a,a1)){
                if(0==strcmp(b,a2)){
                    if(strcmp(c,a3)==0){
                        printf("aguia\n");
                    }
                    else if(strcmp(c,a4)==0){
                        printf("pomba\n");
                    }
                }
            }
            if(strcmp(a,a1)==0){
                if(strcmp(b,a5)==0){
                    if(strcmp(c,a4)==0){
                        printf("homem\n");
                    }
                    else if(strcmp(c,a6)==0){
                        printf("vaca\n");
                    }
                }
            }
            if(strcmp(a,a7)==0){
                if(strcmp(b,a8)==0){
                    if(strcmp(c,a9)==0){
                        printf("pulga\n");
                    }
                    else if(strcmp(c,a6)==0){
                        printf("lagarta\n");
                    }
                }
            }
            if(strcmp(a,a7)==0){
                if(strcmp(b,a10)==0){
                    if(strcmp(c,a9)==0){
                        printf("sanguessuga\n");
                    }
                    else if(strcmp(c,a4)==0){
                        printf("minhoca\n");
                    }
                }
            }

    return 0;

    }



