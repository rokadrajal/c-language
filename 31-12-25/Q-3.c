#include<stdio.h>
#include<conio.h>


int main()
{
    int rowsize;
    int columnsize;
    int sum = 0;

    printf("Enter the rowsize:");
    scanf("%d",&rowsize);

    printf("Enter the columnsize:");
    scanf("%d",&columnsize);

    int a[rowsize][columnsize];


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

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            if(i + j == (rowsize-1))
            {
                sum = sum + a[i][j];

            }
        }
        printf("\n");
    }

    printf("The sum of diagonal elements of an Array:%d ",sum);
    
}