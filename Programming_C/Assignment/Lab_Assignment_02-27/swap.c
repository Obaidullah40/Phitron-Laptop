#include<stdio.h>
int swap(int *L, int *R);

int main()
{
    int n, Q, ara[1000];
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
    scanf("%d", &ara[i]);
    }

    scanf("%d",&Q);
    for (int i = 1; i <= Q; i++)
    {
        int L, R;
        scanf("%d %d", &L, &R);
        swap(&ara[L], &ara[R]);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}


int swap(int *L, int *R)
{
    int temp=*L;
    *L = *R;
    *R = temp;
}