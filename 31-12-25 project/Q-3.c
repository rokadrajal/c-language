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

    int arr1[rowsize][columnsize];
    int arr2[rowsize][columnsize];


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

   
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
        printf("\n");
    }
    
    printf("The transpose matrix of an array:\n");
    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }






   


}