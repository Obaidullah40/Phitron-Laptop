#include<stdio.h>

int ans(int n);

int main()
{
    int n, sum = 0, mainas = 0;
    scanf("%d", &n);
    
    printf("%d", ans(n));
}


int ans(int n)
{
    int flags = 1, sum = 0, mainas = 0;
    for (int i = 1; i <= n; i++)
    {
        if (flags <= 3)
        {
            sum += i;
        }
        else if (flags > 3 && flags <= 6)
        {
            mainas += i;
        }
        if (flags == 6)
        {
            flags = 0;
        }
        flags++;
    }
    return sum - mainas;
}