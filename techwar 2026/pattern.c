#include<stdio.h>
#include<conio.h>

int main()
{
    for(int i=1; i<=9; i+=2)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        if(i<9)
        {
            for(int u=1; u<=i+1; u++)
        {
            printf("@ ");
        }
        printf("\n");

        }
        
        
    }

    printf("T E C H W A R 2 6\n");

    for(int i=1; i<=9; i++)
    {
        for(int j=i; j<=9; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}