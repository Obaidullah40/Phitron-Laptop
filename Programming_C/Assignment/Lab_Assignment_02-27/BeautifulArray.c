#include<stdio.h>

int isBeautiful(int *ara, int n);

int main()
{
    int n, ara[1000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
  
    if (isBeautiful(ara, n))
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
    return 0;
}

int isBeautiful(int *ara, int n) 
{ 
    int count = 0; 
    for (int i = 1; i <= n; i++)
    {
        while (ara[i] > 0) 
        { 
            if (ara[i] % 10 == 7)
            {
                count++; 
            }
            ara[i] = ara[i] / 10; 
        } 
    }
    return (count >= n / 2); 
}