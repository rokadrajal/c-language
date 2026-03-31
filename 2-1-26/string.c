#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    
    // char latter[5] = {'h', 'e' , 'l' , 'l' , 'o'};

    // for(int i=0; i<5; i++)
    // {
    //     printf("%c\n",latter[i]);
    // }



    // char a[5];
    // for(char i=0; i<5; i++)
    // {
    //     printf("Enter the value %d :",i);
    //     scanf(" %c",&a[i]);
    // }

    // for(char i=0; i<5; i++)
    // {
    //     printf("%c",a[i]);
    // }

    char latter2[] = "hello";
    printf("%s\n",strrev(latter2));

    char latter3[] = "hello";
    printf("%s\n",strupr(latter3));

    char latter4[] = "HELLO";
    printf("%s\n",strlwr(latter4));

    char latter5[] = "HELLOWORLD";
    int length = strlen(latter5);
    printf("%d\n",length);

    char a[5];
    strcpy(a,"radha");

   
    // char latter6[] = "hello";   
    // for(int i=0; latter6[i] != '\0' ; i++)
    // {
    //     printf("%c", latter6[i]);
    // }

    // char last[] = "hello";
    // for(int i=0; last[i] != NULL; i++)
    // {
    //     printf("%c", last[i]);
    // }
}