#include<stdio.h>
#include<conio.h>

int main()
{
    int r[5] = {10,20,30,40,50};
    printf("%d",r);

    int *p;
    p = &r;

    for(int i=0; i<5; i++)
    {
        printf("%u => %d\n",p+i,*(p+i));
    }

    float b[5] = {5.1,10.3,15.8,20.0,25.6};
    printf("%f\n",b);

    float *p1;
    p1 = &b;

    for(int i=0; i<5; i++)
    {
        printf("%u = %f\n",p1+i,*(p1+i));
    }

    char c[5] = {'a','b','c','d','f'};
    printf("%c\n",c);

    char *p2;
    p2 = &c;

    for(int i=0; i<5; i++)
    {
        printf("%u = %c\n",p2+i,*(p2+i));
    }

   
}