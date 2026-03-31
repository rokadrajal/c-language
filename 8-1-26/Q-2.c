#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    int y;
    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Enter the value of y:");
    scanf("%d",&y);

    printf("Before swapping:\nx:%d\n y:%d\n",x,y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping:\nx:%d\n y:%d",x,y);


}