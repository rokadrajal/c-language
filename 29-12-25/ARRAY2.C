#include<stdio.h>
#include<conio.h>

// int main()
// {
//     int size = 5;
//     int arr1 [size];

//     // index

//     arr1[0] = 10;
//     arr1[1] = 20;
//     arr1[2] = 30;
//     arr1[3] = 40;
//     arr1[4] = 50;


//     // update / change
//     arr1[3] = 43;

//     // print

//     printf("%d\n",arr1[0]);
//     printf("%d\n",arr1[1]);
//     printf("%d\n",arr1[2]);
//     printf("%d\n",arr1[3]);
//     printf("%d\n",arr1[4]);
// }

int main()
{
    int size = 5;
    int arr1[size];

    for(int i=0; i<=size-1; i++)
    {
        printf("Enter the value at array %d :",i);
        scanf("%d",&arr1[i]);
    }

    for (int i=0; i<=size-1; i++)
    {
        printf("arr1[%d] = %d\n",i,arr1[i]);
    }
}