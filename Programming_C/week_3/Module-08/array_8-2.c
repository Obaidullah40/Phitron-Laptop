#include<stdio.h>
int main()
{
    int i, n=10;
    int ara[n];

    for (i = 0;i<n;i++)
    {
        scanf("%d", &ara[i]);
        printf("number %d\n", i, ara[i]);
    }

    return 0;
}