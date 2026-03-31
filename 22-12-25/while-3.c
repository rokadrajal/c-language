#include<stdio.h>
#include<conio.h>

int main()
{

    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    int i = 1;
    while(i<=number)
    {
        printf("%d\n",i);
        i++;
    }
   
}