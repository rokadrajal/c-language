#include<stdio.h>
#include<conio.h>
#include<string.h>


int one()
{
    char one;
    printf("Enter any string:");
    scanf("%c",&one);

   

   
    // char a[100];
    // printf("Enter any string:");
    // scanf("%d",&a);

    char latter[] = one;
    int length = strlen(latter);
    printf("%d",length);

    return length;

}

int main()
{
   
    one();
    // printf("Langth is:%d",length);
    

}