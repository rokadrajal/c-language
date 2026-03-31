#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);

    int arr1[size];

    for(int i=0; i<=size-1; i++)
    {
        printf("arr1[%d] = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\n");

    
    printf("Original Array is:");
    for(int i=0; i<=size-1; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    

    // REVERSE

    printf("Reverse Array is :");
    for(int i=size-1; i>=0; i--)
    {
        printf("%d ",arr1[i]);
    }




    
}