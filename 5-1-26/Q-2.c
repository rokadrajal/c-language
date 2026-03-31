#include<stdio.h>
#include<conio.h>

// int main()
// {
//     int number;
//     printf("Enter any number:");
//     scanf("%d",&number);

//     if(number % 3 == 0 && number % 5 == 0)
//     {
//         printf("The given number is divisible by both 3 & 5.");
//     }
//     else
//     {
//         printf("The given number is not divisible by both 3 & 5.");
//     }
// }


void divi(int number)
{
    if(number %3 == 0 && number % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }
}

int main()
{
    divi(45);

}