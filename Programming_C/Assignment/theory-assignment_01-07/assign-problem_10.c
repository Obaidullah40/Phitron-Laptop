#include<stdio.h>

int main()
{
    int n, d, p, b;
    printf("Enter a number: ");
    scanf("%d", &n);
    b = n / 2;
    for (int i = 1; i <= b; i++)
    {
        d = n % i;
       if (d==0)
       {
            p=i;  
       }
    }
    if(p == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
    return 0;
}

