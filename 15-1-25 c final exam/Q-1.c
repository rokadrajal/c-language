#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);

    if (a > 0){

        if(a%2 == 0)
        {
        printf("%d number is positive even",a);
        }
        else
        {
        printf("%d number is positive odd",a);
        }

    }
    
    else if(a < 0)
    {
        printf("%d number is negative",a);
    }
    
    else
    {
        printf("The number is zero",a);
    }
}