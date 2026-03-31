#include<stdio.h>
#include<conio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        // SPACE
        for(int s=1; s<=5-i; s++)
        {
            printf(" ");

        }

        // STAR
        for(int j=1; j<=i; j++)
        {
            printf("*");

        }
        printf("\n");
        
    }
}