#include<stdio.h>
#include<conio.h>

// NESTED FUNCTION


void three()
{
    printf("Three is running...\n");
}

void two()
{
    printf("Two is running...\n");
    three();
}


void one()
{
    printf("One is running...\n");
    two();
   
}


int main()
{
    one();
}