#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int i = num;
    printf("Reversed number :");
    while(i > 0)
    {
        printf("%d ",i);
        i--;
    }

    
   

    
}
