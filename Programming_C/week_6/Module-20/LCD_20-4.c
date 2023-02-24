#include<stdio.h>
int cTow_LCD (int x, int y)
{
    int max;
    max = (x < y) ? x : y;
    while(1)
    {
        if (max % x == 0 && max % y == 0)
        {
            return max;// ba oita likha jai
            // max = i;
            // break;
        }
        max++;
    }
}


int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans = cTow_LCD(a, b);
    printf("The GCD is %d\n", ans);
    return 0;
}