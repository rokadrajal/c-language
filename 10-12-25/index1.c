#include<stdio.h>
#include<conio.h>

int main()
{
    // integer

    int a = 10;
    int b = 20;
    int c = 60;

    printf("%d\n",a);
    printf("value of a is : %d\nand value of b is : %d\t and value of c is : %d\n",a,b,c);
    printf("%3d",c);

    // float

    float f1 = 2.4;
    float f2 = 7.1;
    float f3 = 6.0;

    printf("%f",f1);
    printf("value of f1 is : %f\nand value of f2 is : %f\t and value of f3 is : %f\n",f1,f2,f3);
    printf("%.2f",f2);


    // chracter

    char c1 = 'a';
    char c2 = 'b';
    char c3 = 'c';

    printf("%c",c1);
    printf("value of c1 is : %c\nand value of c2 is : %c\t and value of c3 is : %c\n",c1,c2,c3);
    printf("%3c\n",c1);


    // string

    char s1[] = "Hello";
    char s2[] = "bestie";
    char* s3 = "how are you?";

    printf("%s",s1);
    printf("%s %s\t",s1,s2);
    printf("%s",s3);

    
    
    
    
    
    
    
    

}