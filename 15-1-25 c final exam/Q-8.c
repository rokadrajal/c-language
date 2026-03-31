#include<stdio.h>
#include<conio.h>

int main()
{
    int size;
    int even = 0;
    int odd = 0;
    printf("Enter the size:");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<size; i++)
    {
        if(a[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers count:%d\n",even);
    printf("Odd numbers count:%d",odd);
}