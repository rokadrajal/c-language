#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int fact;
    printf("Enter any number:");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
      fact = fact*i;
    }
    printf("The factorial is:%d",fact);

   
}