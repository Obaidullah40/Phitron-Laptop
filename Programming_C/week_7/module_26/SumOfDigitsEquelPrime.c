#include<stdio.h>

int is_prime(int p);
int sum_of_digits(int n);

int main()
{
    int n;
    scanf("%d", &n);

    if (is_prime(sum_of_digits(n)) == 1)
    {
        printf("This is MY number");
    }
    else
    {
        printf("This is not MY number");
    }
    
    return 0;
}


int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

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