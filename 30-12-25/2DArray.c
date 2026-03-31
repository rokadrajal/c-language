#include<stdio.h>
#include<conio.h>

int main()
{
    // 2-D ARRAY
    // datatype arrayname [row][columan]

    int rowsize = 3;
    int columansize = 2;
    int arr[rowsize][columansize];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columansize-1; j++)
        {
            printf("Enter the value at [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columansize-1; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}