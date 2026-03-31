#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    int sum = 0;
    printf("Enter the size:");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<=size-1; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    for(int i=0; i<=size-1; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }

    // SUM

    printf("sum is:%d",sum);
    printf("\n");

    // AVERAGE

    float avg = (float)sum/size;
    printf("Average of an array:%0.2f",avg);
    
}