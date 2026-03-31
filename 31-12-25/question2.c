#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;
    int columnsize;

    printf("Enter the rowsize:");
    scanf("%d",&rowsize);

    printf("Enter the columnsize:");
    scanf("%d",&columnsize);

    int a[rowsize][columnsize];
    int tran[rowsize][columnsize];


    // insert a
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
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


    // Transpose


     for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            tran[j][i] = a[i][j]; 
        }
        printf("\n");
    }

     for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
}