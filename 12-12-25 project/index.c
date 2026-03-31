#include<stdio.h>
#include<conio.h>

int main()
{   

    printf("\nquestion-1\n\n");

    float a;
    float b;
    float celsius;
    float d;

    printf("Enter the value of a:");
    scanf("%f",&a);

    printf("Enter the value of b:");
    scanf("%f",&b);

    printf("The temperature in celsius:");
    scanf("%f",&celsius);

    printf("Enter the value of d:");
    scanf("%f",&d);

    float fahrenheit=((a/b)*celsius)+d;
    printf("The temperature in Fahrenheit:%0.1f\n\n",fahrenheit);


   
   
    printf("question-2\n\n");

    int BaseSalary;
    printf("Enter the Base Salary:");
    scanf("%d",&BaseSalary);

    int HRA = (10*100)/BaseSalary;
    printf("%d\n",HRA);

    int DA = (5*100)/BaseSalary;
    printf("%d\n",DA);

    int TA = (8*100)/BaseSalary;
    printf("%d\n",TA);

    int sum = HRA + DA + TA;
    printf("%d\n",sum);

    int gs = BaseSalary + sum;
    printf("Gross Salary:%d\n",gs);


   
   
    printf("question-3\n\n");

    int FirstAngle;
    int SecondAngle;

    printf("First angle:");
    scanf("%d",&FirstAngle);

    printf("Second angle:");
    scanf("%d",&SecondAngle);

    int ThirdAngle = 180 - FirstAngle - SecondAngle;
    printf("Third angle:%d",ThirdAngle);

}