#include<stdio.h>
#include<conio.h>

int main()
{
    // BREAK

for (int i=1; i<=6; i++)
{
    if(i == 3)
    {
       break;
    }
    printf("i = %d\n",i);
}

for (int i=1; i<=10; i++)
{
    if(i == 3 && i == 7)
    {
       break;
    }
    printf("i = %d\n",i);
}

}