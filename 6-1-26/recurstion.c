#include<stdio.h>
#include<conio.h>


void one()
{
    printf("one is running...\n");
    one();
}

int main()
{
    one();

}