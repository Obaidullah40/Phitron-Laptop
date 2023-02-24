#include<stdio.h>

int arranged(int ara[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int ara[1000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("%d", arranged(ara, n));

    return 0;
}


int arranged(int ara[], int n)
{
    int temp=0, ans=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(ara[i] < ara[j])
            {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        int x = n / 2;
        ans = (ara[x] + ara[x + 1]) / 2;
    }
    else if (n % 2 == 1)
    {
        int x = (n / 2)+1;
        ans = ara[x];
    }
    return ans;
}

