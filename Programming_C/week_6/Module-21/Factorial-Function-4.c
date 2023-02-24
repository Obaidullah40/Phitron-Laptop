#include<stdio.h>
#include<math.h>


int fact(int n);
int main()
{
    int n, r, perm, comb;
    scanf( "%d %d", &n, &r);

    perm = fact(n) / fact(n - r);
    comb = fact(n) / (fact(n - r) * fact(r));
    printf("nPr = %d\n", perm);
    printf("nCr = %d", comb);
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
