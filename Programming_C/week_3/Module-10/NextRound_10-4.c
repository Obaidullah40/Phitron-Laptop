#include<stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int scores[55], ans = 0;
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&scores[i]);
    }
    
    for ( i = 1; i <= n; i++)
    {
        if (scores[i] >= scores[k] && scores[i]>0)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}