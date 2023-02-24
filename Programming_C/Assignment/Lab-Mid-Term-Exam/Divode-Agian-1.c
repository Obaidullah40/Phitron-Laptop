#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n, quotient;
    scanf("%lld", &n);

    if (n%3==0)
    {
        quotient = n / 3;
        printf("%d", quotient);
    }
    else
    {
        printf("-1");
    }
    
    
    return 0;
}
