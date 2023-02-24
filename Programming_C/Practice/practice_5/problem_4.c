#include<stdio.h>

int main()
{
    int i = 1, x, y, z = 0;
    scanf("%d %d", &x, &y);

    for (; z <= x; i ++)
    {
        if (z != 0)
        {
            printf("%d ", z);
        }
        z = y * i;
    }
 
    return 0;
}