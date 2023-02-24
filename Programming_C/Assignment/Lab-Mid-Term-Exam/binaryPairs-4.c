#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, t,a=0, count = 0, arr[100];
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        
        for (int i = 0; i < n; i++)
        {
            if (s[i - 1] == '0' && s[i] == '1')
            {
                count++;
            }
            else if (s[i - 1] == '1' && s[i] == '0')
            {
                count++;
            }
        }
            arr[a] = count;
            count = 0;
            a++;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
