#include<stdio.h>
#include<conio.h>

void one(int *p, int rowsize, int colsize)
{
    printf("cubes of all elements:\n");
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
           printf("%d ",(*(p+i * colsize + j) * (*(p+i * colsize + j))* (*(p+i * colsize + j))));
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

    int a[rowsize][colsize];

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    one(&a[0][0],rowsize,colsize);





}