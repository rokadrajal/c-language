#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
   printf("Enter any number:");
   scanf(" %d",&number);

   int i = 1;
   do
   {
    if(i % 2 == 0)
    {
        printf("%d\n",i);
    }
    i++;
   }while(i<=number);
}