#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == n)
            {
            printf("%d", i);
            }
            else if (i == 1 || j == n)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            } 
        }
        printf("\n");
    }
    
    return 0;
}
