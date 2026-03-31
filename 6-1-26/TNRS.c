#include<stdio.h>
#include<conio.h>

// 3. TNRS - TACK NOTHING, RETURN SOMTHING

int square()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    int square = number*number;
    return square;

}


int main()
{
    // printf("%d",square());
           
        //  OR

    int sq = square();
    printf("%d",sq);

}