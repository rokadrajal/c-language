#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Before swapping a = %d  b = %d\n",a,b);

    int *p1;
    int *p2;
    p1 = &a;
    p2 = &b;

    int c;
    c = *p1;
    *p1 = *p2;
    *p2 = c;
    printf("After swapping a = %d  b = %d\n",a,b);


}