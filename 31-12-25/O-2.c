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
    int b[rowsize][columnsize];
    int c[rowsize][columnsize];


    printf("Enter array A's elements:\n");
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter array B's elements:\n");
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }


    // print

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // sum

     for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            c[i][j]  = a[i][j] + b[i][j];
        }
        printf("\n");
    }

     for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}