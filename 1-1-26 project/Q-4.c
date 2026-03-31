#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;
    int columnsize;

    printf("Enter the row size :");
    scanf("%d",&rowsize);

    printf("Enter the column size :");
    scanf("%d",&columnsize);

    int arr2[rowsize][columnsize];
    int transpose[rowsize][columnsize];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("arr2[%d][%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");
    

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    

    // transpose

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            transpose[j][i] = arr2[i][j];
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0; i<=columnsize-1; i++)
    {
        for(int j=0; j<=rowsize-1; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    
    
}