#include<stdio.h>

int sum_add_even(int n, int ara[]);

int main()
{
    int n, ara[1000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int sum = sum_add_even(n, ara);
    printf("%d", sum);
    return 0;
}


int sum_add_even(int n, int ara[])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(ara[i] % 2 == 0 && i%2 == 0)
        {
            sum += (ara[i] + i);
        }
        if(ara[i] % 2 != 0 && i%2 != 0)
        {
            sum += (ara[i] + i);
        }
    }
    return sum;
}