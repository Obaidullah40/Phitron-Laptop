#include<stdio.h>

int ara[1000], ans = 0;

int divisibleBy3(int n);
int divisibleBy5(int n);

int main()
{
    int n;
    printf("Enter the number of numbers you want to divide\n");
    scanf("%d", &n);
    printf("Enter the elements\n");

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    divisibleBy3(n);
    divisibleBy5(n);
    
    if(ans != 0){
        printf("%d", ans);
    }else{
        printf("%d", -1);
    }

    return 0;
}


int divisibleBy3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(ara[i]%3 == 0){
            ans++;
            ara[i] = 2;
        }
    }
}


int divisibleBy5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(ara[i]%5 == 0){
            ans++;
            ara[i] = 2;
        }
    }
}
