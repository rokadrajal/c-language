#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the array's size:");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");


    printf("Nagative elements from  an Array:");
    for(int i=0; i<size; i++)
    {
        if(a[i] < 0)
        {
            printf("%d,",a[i]);
        }
    }
}