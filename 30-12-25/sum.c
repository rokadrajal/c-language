#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;
    int columansize;
    printf("Enter the value:");
    scanf("%d",&rowsize);

    printf("Enter the value:");
    scanf("%d",&columansize);
    int arr[rowsize][columansize];
    int sum = 0;

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columansize-1; j++)
        {
            printf("Enter the value at [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];
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

    printf("sum is:%d",sum);


}
