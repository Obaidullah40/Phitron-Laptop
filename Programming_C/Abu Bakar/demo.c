#include<stdio.h>

int faun(int* n)
{
    *n = 15;
}
int main()
{
    int n = 5;

    faun(&n);
    printf("%d", n);
}

