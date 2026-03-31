#include<stdio.h>
#include<conio.h>

void one(int rowsize,int colsize,int arr[rowsize][colsize])
{
    printf("Cubes of all elements:\n");
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            int cube = arr[i][j] * arr[i][j] * arr[i][j];
            printf("%d ",cube);

        }
        printf("\n");
    }
}

int main()
{
    int rowsize;
    int colsize;
    printf("Enter array's rowsize:");
    scanf("%d",&rowsize);

    printf("Enter array's colsize:");
    scanf("%d",&colsize);

    int arr[rowsize][colsize];

    printf("Enter array elements:\n");
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");


    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    one(rowsize,colsize,arr);
}