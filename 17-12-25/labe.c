#include<stdio.h>
#include<conio.h>

int main()
{
    // int a;
    // int b;
    // int c;

    // printf("Enter a value of the first number:");
    // scanf("%d",&a);

    // printf("Enter a value of the second number:");
    // scanf("%d",&b);

    // printf("Enter a value of the third number:");
    // scanf("%d",&c);

    // if(a < b)
    // {
    //     if(a < c)
    //     {
    //       printf("a is minimum");
    //     }

    //     else
    //     {
    //         printf("c is minimum");
    //     }
    // }

    // else
    // {
    //     if(b < c)
    //     {
    //         printf("b is minimum");
    //     }

    //     else
    //     {
    //         printf("c is minimum");
    //     }
    // }



    int a;
    int b;
    int c;
    int d;

    printf("Enter a value of the first number:");
    scanf("%d",&a);

    printf("Enter a value of the second number:");
    scanf("%d",&b);

    printf("Enter a value of the third number:");
    scanf("%d",&c);

    printf("Enter a value of the fourth number:");
    scanf("%d",&d);

    if(a > b)
    {
        if(a > c)
        {
            if( a > d)
            {
                printf("a is maximum");
            }

            else
            {
                printf("d is maximum");

            }
        }

        else
        {
            if(c > d)
            {
                printf("c is maximum");
            }

            else
            {
                printf("d is maximum");

            }
        }
    }

    else
    {
        if(b > c)
        {
            if (b > d)
            {
                printf("b is maximum");
            }

            else
            {
                printf("d is maximum");
            }
        }

        else
        {
            if(c > d)
            {
                printf("c is maximum");
            }

            else
            {
                printf("d is maximum");
            }
        }
    }
}