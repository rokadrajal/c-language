#include<stdio.h>
#include<conio.h>

void add(float first, float second){

    int Addition = first + second;
    printf("Addition of %0.0f and %0.0f is : %d",first,second,Addition);
    
}
void sub(float first, float second){

    int subtraction = first - second;
    printf("Subtraction of %0.0f and %0.0f is : %d",first,second,subtraction);

}
void multi(float first, float second){

    int Multiplication = first * second;
    printf("Multiplication of %0.0f and %0.0f is : %d",first,second,Multiplication);

}
void devid(float first, float second){

    int Division = first / second;
    printf("Division of %0.0f and %0.0f is : %d",first,second,Division);

}
void percentage(float first, float second){

    int Modulo = (int)first % (int)second;
    printf("Modulo of %0.0f and %0.0f is : %d",first,second,Modulo);

}

int main()
{
    int choice;

    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %\n");
    printf("Press 0 for exit\n\n");

    printf("Enter your choice:");
    scanf("%d",&choice);

    if(choice == 0){

        return 0;
    }

    float first;
    float second;

    printf("Enter the first number:");
    scanf("%f",&first);

    printf("Enter the second number:");
    scanf("%f",&second);

    switch(choice)
    {
        case 1:
        add(first , second);
        break;

        case 2:
        sub(first , second);
        break;

        case 3:
        multi(first , second);
        break;

        case 4:
        devid(first , second);
        break;

        case 5:
        percentage(first , second);
        break;

    }
}