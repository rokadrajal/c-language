#include<stdio.h>
#include<conio.h>

int main()
{   
    int number;
    int count = 0;
    printf("Enter any number:");
    scanf("%d",&number);

    while(number != 0)
    {
        number = number/10;
        count++;
    }
    printf("Total number of digits:%d",count);
}