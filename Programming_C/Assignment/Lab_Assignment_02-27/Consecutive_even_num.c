#include <stdio.h>
#include <string.h>

int Consecutive_even_num(int n);
int main()
{
    int n, t;
    printf("Enter the number of numbers you want to divide\n");
    scanf("%d", &t);
    printf("Enter the elements\n");
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        Consecutive_even_num(n);
    }
    return 0;
}


int Consecutive_even_num(int n)
{
    int div = n / 4;
    printf("%d %d %d %d\n", div - 3, div - 1, div + 1, div + 3);
}