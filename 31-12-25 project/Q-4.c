#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;
    int columnsize;
    int rownumber;
    int colnumber;
    int rowsum = 0;
    int colsum =0;

    printf("Enter the array's row size:");
    scanf("%d",&rowsize);

    printf("Enter the array's column size:");
    scanf("%d",&columnsize);

    int arr1[rowsize][columnsize];

    printf("Enter array's elements:\n");
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("arr1[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

     for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }


    printf("Enter row number:");
    scanf("%d",&rownumber);

    printf("Elements row of %d:",rownumber);
    for(int j=0; j<columnsize; j++)
    {
        printf("%d",arr1[rownumber][j]);
        rowsum = rowsum + arr1[rownumber][j];
    }
    printf("\n");

    printf("The sum of a row %d :%d",rownumber,rowsum);
    printf("\n\n");


    
    printf("Enter column number:");
    scanf("%d",&colnumber);

    printf("Elements column of %d:",colnumber);
    for(int i=0; i<rowsize; i++)
    {
        printf("%d",arr1[i][colnumber]);
        colsum = colsum + arr1[i][colnumber];
    }
    printf("\n");

    printf("The sum of a column %d :%d",colnumber,colsum);
    printf("\n");




   

}