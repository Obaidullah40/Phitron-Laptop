#include<stdio.h>
int main()
{
    int A, B, C;
    printf("Please enter an input: ");
    scanf("%d %d %d", &A ,&B, &C);
    if(A>B && A>C) 
    {
        printf("A is Bigger.");
    }
    else if(B>A && B>C)
    {
        printf("B is Bigger.");
    }   
    else
       {
        printf("C is Bigger.");
       }
    return 0;
}