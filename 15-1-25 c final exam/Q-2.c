#include<stdio.h>
#include<conio.h>

int main()
{
    int unit;
    printf("Enter the number:");
    scanf("%d",&unit);

    int bill;

    if(unit <= 100)
    {
        bill = unit * 2;
        printf("Total electricity bill:%d",bill);

    }
    else if(unit <= 200)
    {
        bill = unit * 3;
        printf("Total electricity bill:%d",bill);

    }
    else
    {
        bill = unit * 5;
        printf("Total electricity bill:%d",bill);

    }
}