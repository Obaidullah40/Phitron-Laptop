#include<stdio.h>

int main()
{
    int i = 1, n;
    scanf("%d", &n);

    if(n>1){
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }     
    return 0;
}