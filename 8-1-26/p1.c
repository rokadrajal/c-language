#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[10];
    int length = 0;
    printf("Enter any string:");
    scanf("%s",&a);

    char *p;
    p = &a;
    // int b = strlen(p);
    // printf("The length of a string  is:%d",*p);

    while(*p != '\0')
    {
        length++;
        p++;
    }
    printf("%d",length);

    

}