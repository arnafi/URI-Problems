#include<stdio.h>
int num(int array[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("%d\n",array[i]);
    }
}

int sum(int nafi[])
{
    for( int i=0; i<3; i++)
    {
        printf("%d\n",nafi[i]);
    }
}


int main()
{
    int array[3];
    int arr[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&array[i]);
        arr[i] = array[i];
    }
    num(array);

    printf("\n");
    sum(arr);
    return 0;

}
