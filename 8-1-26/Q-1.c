#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the array's size:");
    scanf("%d",&a);

    int arr[a];

    for (int i=0; i<a; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<a; i++)
    {
        printf("%d\n",arr[i]);
    }

    
    int square;
    printf("square of each element:");
    for (int i=0; i<a; i++)
    {
       square = (arr[i]) * (arr[i]);
       printf("%d,",square);
    }

    

    
}