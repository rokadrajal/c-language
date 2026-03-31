#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;

    int addition;
    int substriction;
    int multiply;
    int devide;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    char choice;
    printf("Enter the operaters (+ , - ,* ,/):");
    scanf(" %c",&choice);

    switch(choice)
    {
        case '+':
           addition = a + b;
           printf("%d",addition);
           break;

        case '-':
           substriction = a - b;
           printf("%d",substriction);
           break;

        case '*':
           multiply = a * b;
           printf("%d",multiply);
           break;

        case '/':
           devide = a / b;
           printf("%d",devide);
           break;

        default:
           printf("wrong choice!,because only enter (+ , -, *, /) operaters");
           break;   
          
    }
    // float a;
    // float b;

    // float addition;
    // float substriction;
    // float multiply;
    // float devide;

    // printf("Enter the value of a:");
    // scanf("%f",&a);

    // printf("Enter the value of b:");
    // scanf("%f",&b);

    // char choice;
    // printf("Enter the operaters (+ , - ,* ,/):");
    // scanf(" %c",&choice);

    // switch(choice)
    // {
    //     case '+':
    //        addition = a + b;
    //        printf("%0.2f",addition);
    //        break;

    //     case '-':
    //        substriction = a - b;
    //        printf("%0.2f",substriction);
    //        break;

    //     case '*':
    //        multiply = a * b;
    //        printf("%0.2f",multiply);
    //        break;

    //     case '/':
    //        devide = a / b;
    //        printf("%0.2f",devide);
    //        break;

    //     default:
    //        printf("wrong choice!,because only enter (+ , -, *, /) operaters");
    //        break;   
          
    // }

}