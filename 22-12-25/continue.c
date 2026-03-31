#include<stdio.h>
#include<conio.h>

int main()
{
    // continue
    
   //  for (int i=1; i<=10; i++)
   //  {
   //     if(i == 3 || i == 7)
   //     {
   //        continue;
   //     }
   //  printf("i = %d\n",i);
   //  }


   //  int i=1;
   //  while(i<=5)
   //  {
      
   //    i++;
   //    if(i == 3 || i == 5)
   //    {
   //       continue;
        
   //    }
   //    printf("i = %d\n",i);
     
      
   //  }


    int i = 1;
    do
    {
     
      if( i == 3 )
      {
         continue;
      }
      printf("i = %d\n",i);
      i++;
      
    }while(i<=10);

    
}