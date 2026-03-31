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

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<columnsize; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
        }
    }
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<columnsize; j++)
        {
           printf("%d\n",a[i][j]);
        }
    }

    printf("Total sum is:%d",sum);
}