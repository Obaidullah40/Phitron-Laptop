#include <stdio.h>

int fact(int n);
float factorial_ratio(int x, int y);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("The factorial ratio is %f", factorial_ratio(x, y));
    return 0;
}


int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

float factorial_ratio(int x, int y)
{
    float ratio = fact(x) / (float)fact(y);
    return ratio;
}