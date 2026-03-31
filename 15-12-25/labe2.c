#include<stdio.h>
#include<conio.h>

int main()
{
   int num1;
   int num2;

   printf("Enter the number:");
   scanf("%d",&num1);

   printf("Enter the number:");
   scanf("%d",&num2);

   if (num1 < num2)
   {
    printf("This minimum value is num1:%d",num1);
   }

   else
   {
    printf("This minimum value is num2:%d",num2);
   }













    // int num;

    // printf("Enter the number:");
    // scanf("%d",&num);

    // if (num<0)
    // {
    //     printf("This number is nagetive");
    // }
    // if (num==0)
    // {
    //     printf("This number is neutral");
    // }
    // if (num>0)
    // {
    //     printf("This number is positive");
    // }


    float mat;
    float eng;
    float sci;
    int total;


    printf("Enter the maths mark:");
    scanf("%f",&mat);

    printf("Enter the english mark:");
    scanf("%f",&eng);

    printf("Enter the science mark:");
    scanf("%f",&sci);

    printf("Enter the total mark:");
    scanf("%d",&total);

    float sum = mat + eng + sci;
    printf("%0.0f\n",sum);

    float average = (sum/total)*100;
    printf("Average mark:%0.2f",average);



}