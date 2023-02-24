#include<stdio.h>

int is_prime(int p)
{
    if (p == 1)
    {
        return 0;
    }
    else if (p == 2)
    {
        return 1;
    }
    
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int a, p;
    scanf("%d", &a);
    p = is_prime(a);

    if (p == 1)
    {
        printf("%d is a prime number.\n", a);
    }
    else
    {
        printf("%d is a composite number", a);
    }
    
    return 0;
}