#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int firstdigit;
    int lastdigit;
    printf("Enter any number:");
    scanf("%d",&num);


    lastdigit = num % 10;
    while(num>0)
    {
        firstdigit = num%10;
        num = num/10;
    }
    printf("First Digit:%d\n",firstdigit);
    printf("Last Digit:%d",lastdigit);
       
}