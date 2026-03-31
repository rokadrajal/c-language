#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int a[size];
    int b[size];
    int c[size];
    int sum = 0;

    printf("Enter array A's elements:\n");
    for(int i=0; i<=size-1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter array B's elements:\n");
    for(int i=0; i<=size-1; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }
    
    printf("Array c is:");
    for(int i=0; i<=size-1; i++)
    {
        c[i]= a[i] + b[i];
        printf("%d,",c[i]);
    }

    
}