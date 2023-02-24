#include<stdio.h>

int is_gcd(int x, int y)
{
    int gcd = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }   
    }
    return gcd;
}

int is_lcm(int x, int y)
{
    int lcm = 0;
    for (int i = x; ; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
        }   
    }
}



int main()
{
    int a, b, gcd_ans,lcm_ans;
    scanf("%d %d", &a, &b);
    gcd_ans = is_gcd(a, b);
    lcm_ans = is_lcm(a, b);

    printf("GCD is %d\n", gcd_ans);
    printf("LCM is %d\n", lcm_ans);
    return 0;
}