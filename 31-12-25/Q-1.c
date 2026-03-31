#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;
    int columnsize;
    int sum = 0;

    printf("Enter the array's row size:");
    scanf("%d",&rowsize);

    printf("Enter the array's column size:");
    scanf("%d",&columnsize);

    int arr[rowsize][columnsize];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];

        }
    }
    

   
    printf("\n");

    float avg = (float)sum/(rowsize + columnsize);
    printf("Average of an Array:%0.1f",avg);

}