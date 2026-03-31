#include<stdio.h>
#include<conio.h>


int main()
{
    int rowsize;
    int columnsize;

    printf("Enter the array's row size:");
    scanf("%d",&rowsize);

    printf("Enter the array's column size:");
    scanf("%d",&columnsize);

    int a[rowsize][columnsize];

    printf("Enter array's elements:\n");
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    int max = a[0][0];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is :%d",max);



}