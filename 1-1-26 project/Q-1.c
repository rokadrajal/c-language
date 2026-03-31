#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<=size-1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<=size-1; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("\n");

    int min = a[0];
    for(int i=0; i<=size-1; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The smallest element is:%d",min);
}