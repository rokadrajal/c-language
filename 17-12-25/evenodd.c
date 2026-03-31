#include<stdio.h>
#include<conio.h>

int main()
{
    // int num;

    // printf("Enter the value:");
    // scanf("%d",&num);

    // switch(num % 2)
    // {
    //     case 0:
    //       printf("Even");
    //       break;

    //     case 1:
    //       printf("Odd");
    //       break;
    // }


    int num;

    printf("Enter the value:");
    scanf("%d",&num);

    switch(num % 2)
    {
        case 0:
          printf("Even");
          break;

        default:
          printf("Odd");
          break;


    }
}