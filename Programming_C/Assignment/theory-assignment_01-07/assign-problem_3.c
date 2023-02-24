#include<stdio.h>
int main()
{
    long long int a, b;
    printf("Please enter some numbers: ");
    scanf("%lld", &a);
    for ( b = 0; a > 0; b++)
    {
        a = a / 10;
    }
    printf("%lld digits", b);

    return 0;
}
