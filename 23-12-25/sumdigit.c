#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    int sum = 0;
    printf("Enter any number:");
    scanf("%d",&number);
    int lastdigit = number%10;
    printf("%d",lastdigit);
    

    while(number != 0)
    {
        // int digit = number%10;
        // sum = sum + digit;
        // number = number/10;

        int firastdigit = number/10;
        sum = firastdigit + lastdigit;


        
        
    }
    printf("The sum of the fist and the last digit:%d",sum);
}