#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, ans = 0, multi = 0;
    int sumMlti = 0, add = 0, sumAdd = 0;
    char S[22];
    scanf("%s", &S);
    scanf("%d %d", &a, &b);

    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == '*')
        {
            multi = a * b;
            sumMlti += multi;
        }
        if (S[i] == '+')
        {
            add = a + b;
            sumAdd += add;
        }
    }
    ans = sumAdd + sumMlti;
    printf("%d", ans);

    return 0;
}
