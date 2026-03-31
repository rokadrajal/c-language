#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int a[size];

    printf("Entar array elements :\n");
    for(int i=0; i<=size-1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Lenth of an array:%d",size);
}