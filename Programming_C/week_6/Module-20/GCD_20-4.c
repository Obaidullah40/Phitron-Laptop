#include<stdio.h>
int cTow_GCD(int x, int y)
{
    for (int i = x; i <= 1; i--)
    {
        if (x == i && y == i)
        {
            return i;// ba oita likha jai
            /* ans = i;
            break; */
        }   
    }
}


int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans = cTow_GCD(a, b);
    printf("The GCD is %d\n", ans);
    return 0;
}