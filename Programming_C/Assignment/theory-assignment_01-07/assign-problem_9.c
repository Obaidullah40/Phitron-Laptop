#include<stdio.h>

int main()
{
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ",n);

    for (int i = 1; i <= n; i++)
    {
        d = n % i;
       if (d==0)
       {
           printf("%d, ",i);
       } 
    }

    return 0;
}

