#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    int max;
    max = a[0];

    for(int i=0; i<size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

    }
    printf("This number is largest :%d\n",max);

    for(int i=0; i<size; i++)
    {
        if(a[i] < max)
        {
            max = a[i];
        }

    }
    printf("This number is smallest :%d",max);

}