#include<stdio.h>
#include<conio.h>

int main()
{
    for (int i=5; i>=1; i--)
    {
        for(int s=1; s<=i; s++)
        {
            printf(" ");
        }
        for (int j=1; j<=5-i+1; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}