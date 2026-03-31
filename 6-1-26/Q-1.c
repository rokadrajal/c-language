#include<stdio.h>
#include<conio.h>

int a(int num)
{
    int a = num;
    int sum = 0;
    printf("Enter the size:%d\n",a);

    int arr[a];

    for(int i=0; i<a; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    

    for(int i=0; i<a; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");

    return sum;

}

int main()
{
    printf("%d",a(5));
   

}