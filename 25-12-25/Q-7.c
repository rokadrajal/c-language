#include<stdio.h>
#include<conio.h>

int main()
{
    for (char c = 'A'; c<='E'; c++)
    {
        for (char j = c; j>='A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}