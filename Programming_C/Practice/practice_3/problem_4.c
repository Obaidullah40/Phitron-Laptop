#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("Please enter your mark number: ");
    if(x >= 0  &&  x<= 32)
    {
        printf("F");
    }
    else if (x >= 33  &&  x<= 39)
    {
        printf("D");
    }
    else if (x >= 40  &&  x<= 49)
    {
        printf("C");
    }
    else if (x >= 50  &&  x<= 59)
    {
        printf("B");
    }
    else if (x >= 60  &&  x<= 69)
    {
        printf("A-");
    }
    else if (x >= 70  &&  x<= 79)
    {
        printf("A");
    }
    else if (x >= 80  &&  x<= 100)
    {
        printf("A+");
    }
    return 0;
}