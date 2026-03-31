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

    int arr3[rowsize][columnsize];
    int arr4[rowsize][columnsize];
    int final[rowsize][columnsize];

    
    // insert arr3,arr4

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("arr3[%d][%d] = ",i,j);
            scanf("%d",&arr3[i][j]);
        }
    }


    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("arr4[%d][%d] = ",i,j);
            scanf("%d",&arr4[i][j]);
        }
    }
    
    // print arr3,arr4

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",arr4[i][j]);
        }
        printf("\n");
    }

    // arr3 * arr4 = final

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            final[i][j] = arr3[i][j] *  arr4[i][j];
        }
        printf("\n");
    }

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
    }
    
}