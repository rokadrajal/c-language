#include<stdio.h>
#include<conio.h>

int main()
{
    
    int firstyear;
    int secondyear;

    printf("Enter the first number:");
    scanf("%d",&firstyear);

    printf("Enter the second number:");
    scanf("%d",&secondyear);

    while(firstyear <= secondyear)
    {
        if((firstyear % 4 == 0) && (firstyear % 100 != 0))
        {
            printf("%d\n",firstyear);
        }
        firstyear++;
        
    }

    

   
}