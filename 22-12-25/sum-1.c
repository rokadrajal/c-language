#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);

    int sum = 0;

    for(int i=1; i<=number; i++)
    {
        sum = sum + i;
    }
    printf("The sum off all numbers:%d",sum);
}