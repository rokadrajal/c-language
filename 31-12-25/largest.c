#include<stdio.h>
#include<conio.h>

int main()
{
    int rowsize;    
    int columnsize;    

    printf("Enter the rowsize:");
    scanf("%d",&rowsize);

    printf("Enter the columnsize:");
    scanf("%d",&columnsize);

    int a[rowsize][columnsize];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];

    for(int i=0; i<=rowsize-1; i++)
    {
        for(int j=0; j<=columnsize-1; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("maximum number:%d",max);



    // int size;       

    // printf("Enter the size:");
    // scanf("%d",&size);

    // int a[size];

    // for(int i=0; i<=size-1; i++)
    // {
    //     printf("a[%d] = ",i);
    //     scanf("%d",&a[i]);
    // }

    // for(int i=0; i<=size-1; i++)
    // {
    //     printf("%d\t",a[i]);
    // }
    // printf("\n");


    // // LARGEST NUMBER

    // int max = a[0];

    // for(int i=0; i<=size-1; i++)
    // {
    //     if(a[i] > max)
    //     {
    //         max = a[i];
    //     }
    // }

    // printf("largest number:%d",max);


}