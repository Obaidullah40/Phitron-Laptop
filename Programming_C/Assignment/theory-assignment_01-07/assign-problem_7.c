#include<stdio.h>
int main()
{
    int i, a, b, gcd=0;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d.",a, b, gcd);

    return 0;
}