#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Enter any string:");
    scanf(" %s",&a);

    int length = strlen(a);
    printf("The length of a string is:%d",length);

}