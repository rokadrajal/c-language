#include<stdio.h>
#include<conio.h>

int main()
{
    // ARRAY -> collection of various data with same datatype
    // ARRAY -> 1. 1-D Array , 2. 2-D Array

    int arr [5] = {10,20,33,42,56};

    // print

    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[4]);

    for(int i = 0; i<=5-1; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
