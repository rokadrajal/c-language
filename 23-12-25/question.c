#include<stdio.h>
#include<conio.h>

int main()
{
    // Q-1 even number in 1 to N

    // for(int i=1; i<=5; i++)
    // {
    //     if(i%2 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }
    

    // int i = 1;
    // while(i<=10)
    // {
    //     if(i%2 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    //     i++;
    // }

    // int i = 1;
    // do
    // {
    //     if(i%2 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    //     i++;
    // }while(i<=10);






    // Q-2 odd number

    // for(int i=1; i<=5; i++)
    // {
    //     if(i%2 != 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    // int i = 10;
    // while(i>=1)
    // {
    //     if(i%2 != 0)
    //     {
    //         printf("%d\n",i);
    //     }
    //     i--;
    // }


    // int i = 1;
    // do
    // {
    //     if(i%2 != 0)
    //     {
    //         printf("%d\n",i);
    //     }
    //     i++;
    // }while(i<=10);


    // Q-3 print the total number of digit in a number

    // int num = 234;
    // int count = 0; 
    // while(num != 0)
    // {
    //     num = num/10;
    //     count++;
    // }
    // printf("total digit:%d",count);



    // Q-4 sum of total digit

    // int num = 234;
    // int sum = 0;

    // while(num != 0)
    // {
    //    int digit = num%10;
    //    sum = sum + digit;
    //    num = num/10;

    // }
    // printf("sum :%d",sum);



    // Q-5 sum

    int sum = 0;
    for(int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
     printf("sum is:%d\n",sum);


}


