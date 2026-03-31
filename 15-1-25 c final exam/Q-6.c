#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d",&num);

    int i = 0;
    do
    {
        sum = sum + i;
        i++;


    }while(i < num);

    printf("Total sum is : %d",sum);
}