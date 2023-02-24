#include<stdio.h>
int main()
{
    long long int i, x, N;
    long long int ara[201000];
    scanf("%lld", &N);
    for (i = 1; i<N; i++)
    {
        scanf("%lld", &x);
        ara[x] = 1;
    }
    for ( i = 1; i <= N; i++)
    {
         if (ara[i]==0)
         {
            printf("%lld", i);
            break;
         } 
    }

    return 0;
}