#include<stdio.h>
#include<conio.h>

int main()
{ 
   int num= 11; 
   for (int i=1; i<=4; i++)
   {
    for (int j=1; j<=i; j+=1)
    {
        printf("%d ",num);
        num++;
    }
    printf("\n");
   }
}