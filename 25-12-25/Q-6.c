#include<stdio.h>
#include<conio.h>

int main()
{
    for(int i=5; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            if ((i + j) % 2 == 0) {
                printf("1");
            } 
            else {
                printf("0");
            }
        }
        printf("\n");
    
    }
}