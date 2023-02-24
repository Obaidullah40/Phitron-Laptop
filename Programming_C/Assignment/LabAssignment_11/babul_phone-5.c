#include <stdio.h>
int main()
{
    int T, X, cnt = 0 ;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d%%",&X);
        if (60 >= X)
        {
            cnt = 60 - X;
            X += (60 - X);
        }
        if (80 >= X && 60 <= X)
        {
            cnt += (80 - X) * 2;
            X += 80 - X;
        }
        if (100 >= X && X >= 80)
        {
            cnt += (100 - X) * 3;
        }
        printf("%d minutes\n", cnt);
        cnt = 0;
    }

    return 0;
}