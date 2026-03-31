#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the array's size:");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<=size-1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<=size-1; i++)
    {
        printf("%d\n",a[i]);
    }

    int sq;
    printf("Reversed array elements:\n");
    for(int i=size-1; i>=0; i--)
    {
        sq = a[i] * a[i];
        printf("%d,",sq);
    }
}