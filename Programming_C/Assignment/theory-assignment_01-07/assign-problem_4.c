#include<stdio.h>
int main()
{
    int a, b;
    printf("Pleasec enter some numbers: ");
    scanf("%d", &a);
    for ( b = 0; a > 0;)
    {
        b += a % 10;
        a = a / 10;
    }
    
    printf("%d digits", b);

    return 0;
}
