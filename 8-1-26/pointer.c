#include<stdio.h>
#include<conio.h>

int main()
{
   int a = 10;
   printf("a = %d\n",a);

   int *p;
   p = &a;

   // OR
   
//    int *p = &a;

   printf("Address of a = %u\n",p);

   int b = 20;
   printf("b = %d\n",b);

   int *p1;
   p1 = &b;

   printf("Address of b = %u\n",p1);

   int c = 30;
   printf("c = %d\n",c);

   int *p2;
   p2 = &c;

   printf("Address of c = %u\n",p2);


   char r = 'r';
   printf("r = %c\n",r);

   int *p3;
   p3 = &r;

   printf("Address of r = %u\n",p3);


   char* k = "ram";
   printf("k = %s\n",k);

   int *p4;
   p4 = &k;

   printf("Address of k = %u\n",p4);


   float f = 12.5;
   printf("f = %f\n",f);

   int *p5;
   p5 = &f;

   printf("Address of f = %u\n",p5);
   
   
}