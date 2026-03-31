#include<stdio.h>
#include<conio.h>

int main()
{

    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    int i = 15;
    while(i>=number)
    {
        if(i%2 != 0)
        {
           printf("%d\n",i);
        }
        i--;
    }

   
}