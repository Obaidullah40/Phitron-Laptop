#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, count = 1, max = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    for (int i = 0; i < n; i++)
    {
        if (i < n-1 && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {            
            if (count>max)
            {
                max = count;
            }
            count = 1;
        }
    }

    printf("%d", max);
    return 0;
}
