#include<stdio.h>
#include<conio.h>

int main()
{
    // implicit type conversion -> machine jate convert kare 

    int a = 15;
    float b = 10.5;

    // float sum = a+b;
    // printf("sum is : %f",sum);

    int sum = a+b;
    printf("sum is : %d",sum);

    // explicit type conversion -> user ke tema convert kare

    int a = 15;
    float b = 10.5;

    // float sum = a + (int)b;
    // printf("sum is : %f",sum);

    int sum = a + (int)b;
    printf("sum is : %d",sum);



}
