#include<stdio.h>
#include<conio.h>

int main()
{

    // 1-positive and negative number

    int num;
    printf("Enter the value:");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("This number is positive\n");
    }
    else
    {
        printf("This number is negative");
    }



    // 2-largest number

    int a;
    int b;
    int c;
    int d;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    printf("Enter the value of d:");
    scanf("%d",&d);


    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
            {
                printf("a is largest number");
            }
            else
            {
                printf("d is largest number");
            }
        }
        else 
        {
            if(c > d)
            {
                printf("c is largest number");
            }
            else
            {
                printf("d is largest number");
            }
        }
    }

    else
    {
        if(b > c)
        {
            if(b > d)
            {
                printf("b is largest number");
            }
            else
            {
                printf("d is largest number");
            }
        }
        else
        {
            if(c > d)
            {
                printf("c is largest number");
            }
            else
            {
                printf("d is largest number");
            }
        }
    }



    // 3-electricity bill

      int units;
      printf("Enter total units:");
      scanf("%d",&units);

      int bill;

      if(units <= 100)
      {
        bill = units * 2;
        printf("Total electricity bill:%d",bill);
      }
      else if (units <= 200)
      {
        bill = units * 3;
        printf("Total electricity bill:%d",bill);
      }
      else
      {
        bill = units * 5;
        printf("Total electricity bill:%d",bill);
      }

      

    // 4-temperature

    float temp;
    printf("Enter the temperature:");
    scanf("%f",&temp);

    if(temp > 35)
    {
      printf("Very Hot");
    }
    else if(temp >= 25)
    {
      printf("Hot");
    }
    else if(temp >= 15)
    {
      printf("Normal");
    }
    else
    {
      printf("Cold");
    }


    // 5-result

    int score;
    char grad;

    printf("Enter the score:");
    scanf("%d",&score);

    if(score > 90)
    {
       grad='A'; 
    }
    else if(score > 80)
    {
       grad='B'; 
    }
    else if(score > 70)
    {
       grad='C'; 
    }
    else if(score > 60)
    {
       grad='D'; 
    }
    else
    {
       grad='F'; 
    }

    printf("Your gard is:%c.",grad);

    switch(grad)
    {
        case 'A':
          printf("Excellent");
          break;

        case 'B':
          printf("Very Good");
          break;
          
        case 'C':
          printf("Good");
          break;
          
        case 'D':
          printf("Pass");
          break;
          
        default:
          printf("Fail"); 
          break; 
    }


    // 6-calculator

   float f1;
   float f2;

   float addition;
   float subtraction;
   float multiply;
   float divide;
   float modulo;

   printf("Enter the value of f1:");
   scanf("%f",&f1);

   printf("Enter the value of f2:");
   scanf("%f",&f2);

   
    char choice;
    printf("Enter the operaters (+ , - ,* ,/,%):");
    scanf(" %c",&choice);

   switch(choice)
   {
      case '+':
        addition = f1 + f2;
        printf("%0.2f",addition);
        break;
        
      case '-':
        subtraction = f1 - f2;
        printf("%0.2f",subtraction);
        break;
        
      case '*':
        multiply = f1 * f2;
        printf("%0.2f",multiply);
        break;
        
      case '/':
        divide = f1 / f2;
        printf("%0.2f",divide);
        break;

      case '%':
        modulo = (int)f1 % (int)f2;
        printf("%f",modulo);
        break;

      default:
        printf("invalid choice!");
        break;  
        
   }

}