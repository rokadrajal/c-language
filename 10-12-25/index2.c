#include<stdio.h>
#include<conio.h>

int main()
{
    // integer

    int a = 10;
    int b = 6;
    int c = 53;

    printf("%6d\n",a);
    printf("%d\t",b);
    printf("%d\n",c);


    // float

    float f1 = 2.5;
    float f2 = 9.2;
    float f3 = 7.0;
    double f4 = 18.1;

    printf("%.3f\n",f1);
    printf("%f\t",f2);
    printf("%f\t",f3);
    printf("%f\n",f4);



    // character

    char c1 = 'k';
    char c2 = 'l';
    char c3 = 'r';
    char c4 = 'n';


    printf("%c\n",c1);
    printf("%c\n",c2);
    printf("%c\n",c3);
    printf("%c\n",c4);


    // string

    char s1[] = "Kantibhai";
    char s2[] = "Liliben";
    char s3[] = "Rajal";
    char s4[] = "Nirbhay";

    printf("%s\t",s1);
    printf("%s\n",s2);
    printf("%s\t",s3);
    printf("%s\n",s4);


    char* s5 = "Hello\t";
    char* s6 = "girl";

    printf("%s",s5);
    printf("%s",s6);
}

