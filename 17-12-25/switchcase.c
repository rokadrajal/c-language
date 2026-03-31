#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;

    printf("Enter the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
           printf("Monday");
           break;

        case 2:
           printf("Tuesday");
           break;

        case 3:
           printf("Wednesday");
           break;

        case 4:
           printf("Friday");
           break;

        case 5:
           printf("Saturday");
           break;

        case 6:
           printf("Sunday");
           break;

        default:
           printf("invalid choice!");
           break;
    }
}