#include<stdio.h>
#include<conio.h>

int main()
{

   // sum 

   int a;
   int b;
   
   printf("Enter the value of a:");
   scanf("%d",&a);

   printf("Enter the value of b:");
   scanf("%d",&b);

   int sum = a+b;
   printf("sum=%d\n",sum);



   
   // area of rectangel  

   int height;
   int width;
   

   printf("Enter the value of height:");
   scanf("%d",&height);

   printf("Enter the value of width:");
   scanf("%d",&width);


   int area = height*width;
   printf("area = %d\n\n",area);





   // swapping

   int i1;
   int i2;

   printf("Enter the value of i1:");
   scanf("%d",&i1);

   printf("Enter the value of i2:");
   scanf("%d",&i2);

   printf("befor swap: i1 = %d\ni2 = %d\n",i1,i2);

   // swap

   int i3;
   i3=i1;
   i1=i2;
   i2=i3;
   

   printf("after swap: i1 = %d\ni2 = %d",i1,i2);


                   OR


   
   // sawp 


   int i1;
   int i2;

   printf("Enter the value of i1:");
   scanf("%d",&i1);

   printf("Enter the value of i2:");
   scanf("%d",&i2);

   printf("befor swap: i1 = %d\ni2 = %d\n",i1,i2);
   

   int i3;
   i3=i1;
   i1=i2;
   i2=i3;

   printf("after swap: i1 = %d\ni2 = %d\n",i1,i2);

  
  
   // PERCENTAGE


   int s1;
   int s2;
   int s3;
   int s4;
   int s5;
   int total;

   printf("Enter the mark of s1:");
   scanf("%d",&s1);

   printf("Enter the mark of s2:");
   scanf("%d",&s2);

   printf("Enter the mark of s3:");
   scanf("%d",&s3);

   printf("Enter the mark of s4:");
   scanf("%d",&s4);

   printf("Enter the mark of s5:");
   scanf("%d",&s5);

   printf("total mark  of all subjects:");
   scanf("%d",&total);


   float sum = s1+s2+s3+s4+s5;
   printf("sum of all subject:%0.0f\n",sum);
   
  
   float percentage=(sum/total)*100;
   printf("%0.2f",percentage);


   


   // square*2,cube*3

   int ox;

   printf("Enetr the number:");
   scanf("%d",&ox);

   int sq=ox*ox;
   printf("squer of %d is :%d\n",ox,sq);

   int cube=ox*ox*ox;
   printf("cube of %d is :%d",ox,cube);



   // squere*2

   int a;

   printf("Enter the number:");
   scanf("%d",&a);

   int sq=a*a;
   printf("square of %d:\n",sq);

   // cube*3 


   int c;

   printf("Enter the number:");
   scanf("%d",&c);

   int cube=c*c*c;
   printf("square of %d is :%d ",c,cube);




}