#include<stdio.h>
#include<conio.h>

int main()
{
    // int score;

    // printf("Enter your score:");
    // scanf("%d",&score);

    // if(score >=90)
    // {
    //     printf("your grad is:A");   
    // }

    // else if(score >=80)
    // {
    //     printf("your grad is:B"); 
    // }

    // else if(score >=70)
    // {
    //     printf("your grad is:C"); 
    // }

    // else if(score >=60)
    // {
    //     printf("your grad is:D"); 
    // }

    // else if(score >=50)
    // {
    //     printf("your grad is:E"); 
    // }

    // else if(score >=40)
    // {
    //     printf("your grad is:F"); 
    // }
    // else 
    // {
    //     printf("you are fail");
    // }


    // int score;

    // printf("Enter your score:");
    // scanf("%d",&score);

    // (score >=90)? printf("your grad is A."):;
    // (score >=80)? printf("your grad is B."):;
    // (score >=70)? printf("your grad is C."):;
    // (score >=60)? printf("your grad is D."):;
    // (score >=50)? printf("your grad is E."):;
    // (score >=40)? printf("your grad is F."):;




    // int score;
    // char grad;
    // printf("Enter your score:");
    // scanf("%d",&score);

    // if(score >90)
    // {
    //     grad = 'A';
    // }
    // else if(score >80)
    // {
    //     grad = 'B';  
    // }

    // else if(score >70)
    // {
    //    grad = 'C'; 
    // }

    // else if(score >60)
    // {
    //     grad = 'D';
    // }
    // else
    // {
    //    grad = 'F'; 
    // }

    // printf("Your grad is:%c.",grad);

    // switch(grad)
    // {
    //     case 'A':
    //       printf("Excellent work!");
    //       break;

    //     case 'B':
    //       printf("Well done!");
    //       break;

    //     case 'C':
    //       printf("Good job!");
    //       break;

    //     case 'D':
    //       printf("You passed,but you could do better!");
    //       break;

    //     case 'F':
    //       printf("Sorry,you failed!");
    //       break;

    //     default:
    //       printf("invalid choice!");
    //       break;   

    //  }


    int score;
    char grad;
    printf("Enter your score:");
    scanf("%d",&score);

    if(score >90)
    {
        grad = 'A';
    }

    else if(score >80)
    {
        grad = 'B';
    }

    else if(score >70)
    {
        grad = 'C';
    }

    else
    {
        grad = 'D';
    }
    

    printf("Your grad is:%c.",grad);

    switch(grad)
    {
        case 'A':
          printf("Excellent work!You are eligible for the next level.");
          break;

        case 'B':
          printf("Well done!You are eligible for the next level.");
          break;

        case 'C':
          printf("Good job!You are eligible for the next level.");
          break;

        case 'D':
          printf("wrong choice!Please try again next time");
          break;  
    }




}