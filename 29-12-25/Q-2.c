#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    int a[size];
    int sum =0;
    float avg;

    printf("Enter the elements:\n");
    for(int i=0; i<=size-1; i++)
    {
        printf("a[%d] =",i);
        scanf("%d",&a[i]);   
    }

    // avg =(float)sum/size;
    // printf("Average of an array:%0.2f",avg);


}