#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);

    
    int a = 0;
    int b = 1;
    int c;
    for(int i=1; i<=number; i++)
    {
        printf("%d\n",a);
        c = a + b ;
        a = b;
        b = c;
    }
}