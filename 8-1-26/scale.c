#include<stdio.h>
#include<conio.h>

int main()
{
   int a = 10;
   printf("a = %d\n",a);

   int *p;
   p = &a;

   printf("Address of a = %u\n",p+1);

   int b = 20;
   printf("b = %d\n",b);

   int *p1;
   p1 = &b;

   printf("Address of b = %u\n",p1+2);

   char r = 'r';
   printf("r = %c\n",r);

   int *p3;
   p3 = &r;

   printf("Address of r = %u\n",p3+2);


   float g = 30.5;
   printf("g = %f\n",g);

   int *p4;
   p4 = &g;

   printf("Address of g = %u\n",p4+2);


   char o[] = "ram";
   printf("o = %s\n",o);

   int *p6;
   p6 = &o;

   printf("Address of m = %u\n",p6+1);
   


   char* m = "ram";
   printf("m = %s\n",o);

   int *p5;
   p5 = &m;

   printf("Address of m = %u\n",p5+1);





}