#include<stdio.h>
#include<conio.h>

int main()
{
    // int num1;
    // int num2;
    // int num3;

    // printf("Enter a value of the first number:");
    // scanf("%d",&num1);

    // printf("Enter a value of the second number:");
    // scanf("%d",&num2);

    // printf("Enter a value of the third number:");
    // scanf("%d",&num3);

    // if(num1 < num2)
    // {
    //     if (num1 < num3)
    //     {
    //         printf("first number is minimum");
    //     }
    //     else 
    //     {
    //         printf("third number is minimum");

    //     }
    // }

    // else
    // {
    //     if(num2 < num3)
    //     {
    //         printf("second number is minimum");
    //     }

    //     else
    //     {
    //         printf("third number is minimum");
    //     }

    // }

    // if (num1 < num2 && num1 < num3)
    // {
    //     printf("first number is minimum");
    // }

    // else if (num2 < num3 && num2 < num1)
    // {
    //     printf("second number is minimum");
    // }

    // else
    // {
    //     printf("third number is minimum");
    // }

    int choice;
    int choice2;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);

    

    switch(choice)
    {
        case 1:
          printf("\nPress 1 for Internet Recharge\n");
          printf("Press 2 for Top-up Recharge\n");
          printf("Press 3 for Special Recharge\n");
          printf("\nEnter your choice:");
          scanf("%d", &choice2);

          switch(choice2)
          {
            case 1:
              printf("You have successfully done a Internet Recharge.\n\n");
              break;

            case 2:
              printf("You have successfully done a Top-Up Recharge.\n\n");
              break;

            case 3:
              printf("You have successfully done a Special Recharge.\n\n");
              break;

          }
          break;

        case 2:
          printf("\nInternet Recharge ke liye 1 dabaiye.\n");
          printf("Top-up Recharge ke liye 2 dabaiye.\n");
          printf("Special Recharge ke liye 3 dabaiye.\n");
          printf("\nEnter your choice:");
          scanf("%d", &choice2);

          switch(choice2)
          {
            case 1:
              printf("Aapne safaltapurvak Internet Recharge kar liya he.\n\n");
              break;

            case 2:
              printf("Aapne safaltapurvak Top-Up Recharge kar liya he.\n\n");
              break;

            case 3:
              printf("Aapne safaltapurvak Special Recharge kar liya he.\n\n");
              break;

          }
          break;
          
          
        case 3:
          printf("\nTame safaltapurvak Internet Recharge  Karyu chhe.\n");
          printf("Tame safaltapurvak Top-up Recharge Karyu chhe.\n");
          printf("Tame safaltapurvak Special Recharge  Karyu chhe.\n");
          printf("\nEnter your choice:");
          scanf("%d", &choice2);

          switch(choice2)
          {
            case 1:
              printf("Aapne safaltapurvak Internet Recharge kar liya he.\n\n");
              break;

            case 2:
              printf("Aapne safaltapurvak Top-Up Recharge kar liya he.\n\n");
              break;

            case 3:
              printf("Aapne safaltapurvak Special Recharge kar liya he.\n\n");
              break;

          }
          break;
          
          
    }


}