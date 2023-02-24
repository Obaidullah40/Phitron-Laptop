#include<stdio.h>
#include<math.h>

int seven_pre(int x);
int digit_Sum (int x);
int last_prime(int x);
int main()
{
    int n;
    scanf("%d", &n);

    if (seven_pre(n) == 1 && digit_Sum(n) > 10 && last_prime(n) == 1)
    {
        printf("Yes, This is my number %d\n");
    }
    else
    {
        printf("No, This is NOT my number %d\n");
    }

    return 0;
}
    

 

int seven_pre(int x)
{
    while (x > 0 )
    {
        if (x % 10 == 7)
        {
            return 1;
        }
        x /= 10;
    }
    return 0;
}

int digit_Sum (int x)
{
    int sum = 0;
    while (x>0)
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int last_prime(int x)
{
    int ld = x % 10;
    if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}