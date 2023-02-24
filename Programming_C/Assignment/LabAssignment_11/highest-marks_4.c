#include<stdio.h>
int main()
{
    int n, i, hm = 0;
    scanf("%d", &n);
    int marks[n],d;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(hm < marks[i])
        {
            hm = marks[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        d = hm - marks[i];
        printf("%d ", d);
    }

    return 0;
}