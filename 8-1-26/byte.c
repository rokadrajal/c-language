#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10;
    printf("a = %d\n",a);
    printf("%zu byte\n",sizeof(a));

    float b = 20;
    printf("b = %f\n",b);
    printf("%zu byte\n",sizeof(b));

    char c = 'R';
    printf("c = %c\n",c);
    printf("%zu byte\n",sizeof(c));

    char d[] = "Ram";
    printf("d = %s\n",d);
    printf("%zu byte\n",sizeof(d));
}